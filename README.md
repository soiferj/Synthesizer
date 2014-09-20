Synthesizer
===========

Arduino-based Monophonic Synthesizer. Will be capable of producing sine, saw, square, and triangle waves with modifiable amp envelopes and some simple modulation.


Tools Used:
===========

- Digitlent chipKIT uc32
- MPIDE to program chipKIT
- A small circuit to push the sound out (shown below)


Circuit:
---------
- C1 = 10nF
- C2 = 10µF
- R1 = 1k

(PIN 3)---R1-------C2-->> Audio out (I used 3.5mm jack to speaker)
               |
               C1
               |
              GND

