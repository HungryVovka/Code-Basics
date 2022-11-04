// -----------------------------------------------------------
// Exercise
// Write a program kelvin_to_celcius that converts Celsius to Kelvin in the same way as the one 
// in the video. The program should display values like this:
// 
// 0:273
// 20:293
// 40:313
// 60:333
// 80:353
// 100:373
// 120:393
// 140:413
// 160:433
// 180:453
// 200:473
// 220:493
// 240:513
// 260:533
// 280:553
// 300:573
// 
// The left column is Celsius, the right column is Kelvin.
// -----------------------------------------------------------

#include <stdio.h>

void kelvin_to_celcius(void){
  int kelvin, celcius;
  int first, last, step;

  first = 0;
  last = 300;
  step = 20;

  kelvin = first;

  while (kelvin <= last){
    celcius = kelvin + 273;
    printf("%d : %d\n", kelvin, celcius);
    kelvin += step;
  }
}