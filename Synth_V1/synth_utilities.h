/*
 * file for storing necessary constants, defines and functions
 */
 
 #include "wavetables.h"
 
 /* ~~~~~ defines ~~~~~ */
#define SAMPLE_RATE 20000.0

#define PROCESSOR_SPEED 80000000.0

#define FREQUENCY A_Four

#define ATTACK_MAX_S 5

#define PWM_MAX_VALUE 255

#define PWM_SCALER PWM_MAX_VALUE/2

#define PWM_PIN 3 // OC1 pin

/* ~~~~~ waves ~~~~~ */
#define SINE_WAVE 0

/* ~~~~~ bit operation macros ~~~~~ */
#define SET(x,y) (x |=(1<<y))
#define CLR(x,y) (x &= (~(1<<y)))
#define CHK(x,y) (x & (1<<y))
#define TOG(x,y) (x^=(1<<y))

/* ~~~~~ wavetable start addresses ~~~~~ */
#define SINE_WAVE_START 0

/* ~~~~~ functions ~~~~~ */

/*
 * function for taking a weighted average of amplitudes for waveform
 */
int AverageAmplitudes(float index, int wave)
{
  int highVal = 0;
  int lowVal = 0;
  float fraction = 0.00;
  int finalValue = 0;
  
  switch (wave)
  {
   case SINE_WAVE:
   {
     lowVal = sine_wave[(int)index];
     highVal = sine_wave[(int)(index + 0.5)];
     break; 
   }
  }
  
  fraction = index - (int)index;
  finalValue = (lowVal + ((float)(highVal - lowVal)*fraction)) + 0.5;
}

/*
 * takes a value 0-1023 and converts it between 0-255
 */
int NormalizePotValue(int potValue)
{
  return ((PWM_MAX_VALUE*potValue)/1023);
}

/*
 * takes a value 0-1023 and converts it into milliseconds between 0-5000
 */
float PotValueToSeconds(int potValue)
{
  return ((float)(ATTACK_MAX_S*potValue)/1023);
}
