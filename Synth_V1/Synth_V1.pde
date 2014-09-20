/*
 * interrupt-based synthesizer outputting on PWM pin 3 from timer 2
 *
 * TODO: envelopes
 *       more waveforms
 *       get input from potentiometers / push buttons
 */

#include <plib.h>
#include <EEPROM.h>
#include "wavetables.h"
#include "envelope_tables.h"
#include "note_frequencies.h"
#include "synth_utilities.h"

/* ~~~~~ function prototypes ~~~~~ */
void StoreWavetables();

/* ~~~~~ waveform / envelope generation global variables ~~~~~ */
int ampValue = PWM_MAX_VALUE + 1;

float phaseDelta = ((PWM_MAX_VALUE + 1)*FREQUENCY)/SAMPLE_RATE;
float phaseAcc = 0;

int attackPotValue = 1023; // NOTE: this should be from a potentiometer
float attackTimeSeconds = PotValueToSeconds(attackPotValue);

float attackDelta = ((PWM_MAX_VALUE + 1)*(1.0/5.0))/SAMPLE_RATE;
float attackAcc = 0;

int sustainValue = 256;

bool isAttack = true;

/*
 * setup function; sets up interrupts and PWM
 */
void setup()
{ 
  /* ~~~~~ init 8-bit PWM output on pin 3 ~~~~~ */
  pinMode(PWM_PIN, OUTPUT);
  SetDCOC1PWM(0);
  OpenTimer2(T2_ON | T2_PS_1_1, PWM_MAX_VALUE + 1);
  OpenOC1(OC_ON | OC_TIMER2_SRC | OC_PWM_FAULT_PIN_DISABLE, 0, 0);

  /* ~~~~~ init timer1 interrupt to hit at 20 KHz ~~~~~ */
  ConfigIntTimer1(T1_INT_ON | T1_INT_PRIOR_3);
  OpenTimer1(T1_ON | T1_PS_1_1, (int)PROCESSOR_SPEED / (int)SAMPLE_RATE);
  
  /* ~~~~~ enable multiple interrupts ~~~~~ */
  INTEnableSystemMultiVectoredInt();
}

void loop()
{
  //TODO: get input
}

/*
 * timer1 handler
 */
extern "C"
{
  void __ISR(_TIMER_1_VECTOR, ipl3) 
  Timer1Handler(void)
  { 
    /* ~~~~~ calculate amplitude based on envelope ~~~~~ */
    if (isAttack)
    {
      ampValue = attack_envelope[(int)(attackAcc + 0.5)];
    }
    else
    {
      ampValue = sustainValue;
    }
    
    /* ~~~~~ waveform output ~~~~~ */
    SetDCOC1PWM((PWM_SCALER + sine_wave[(int)(phaseAcc + 0.5)])*(ampValue >> 8));  // set PWM output value 0-255
  
    /* ~~~~~ update phase accumulator, checking if it has overflowed ~~~~~ */
    phaseAcc += phaseDelta;
    if (phaseAcc > PWM_MAX_VALUE)
    {
      phaseAcc = 0; 
    }
    
    /* ~~~~~ update attack accumulator, checking if it has overflowed ~~~~~ */
    attackAcc += attackDelta;
    if (attackAcc > PWM_MAX_VALUE)
    {
      attackAcc = 0;
      isAttack = false;
    }
  
    /* ~~~~~ clear interrupt flag ~~~~~ */
    mT1ClearIntFlag();
  } 
}

/*
 * function to store wavetables in EEPROM
 */
void StoreWavetables()
{
  /* ~~~~~ store sine wave in EEPROM ~~~~~ */
  for (int i = 0; i < 256; i++)
  {
    EEPROM.write(i, sine_wave[i]); 
  }
}
