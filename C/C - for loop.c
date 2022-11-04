// -----------------------------------------------------------
// Exercise
// Add the missing line of the program from the video. Use a for loop.
// 
// The output of the program should be like this:
// 
// 0.00 : -17.78
// 20.00 : -6.67
// 40.00 : 4.44
// 60.00 : 15.56
// ...
// -----------------------------------------------------------

#include <stdio.h>

void fahr_to_celcius(void){
    float fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20){
      printf("%3.2f : %6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}