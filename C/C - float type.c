// -----------------------------------------------------------
// Exercise
// Write a program km_to_mi that converts kilometers to miles. Use this formula: miles = kilometers x 0.621.
// 
// Your program should use the float type and print values like this:
// 
// 0.00 : 0.00
// 20.00 : 12.42
// 40.00 : 24.84
// 60.00 : 37.26
// 80.00 : 49.68
// 100.00 : 62.10
// 120.00 : 74.52
// 140.00 : 86.94
// 160.00 : 99.36
// 180.00 : 111.78
// 200.00 : 124.20
// 220.00 : 136.62
// 240.00 : 149.04
// 260.00 : 161.46
// 280.00 : 173.88
// 300.00 : 186.30
// -----------------------------------------------------------

#include <stdio.h>

void km_to_mi(void){
  float km, mi;
  float first, last, step;

  first = 0.0;
  last = 300.0;
  step = 20.0;

  km = first;

  while (km <= last){
    mi = km * 0.621;
    printf("%.2f : %.2f\n", km, mi);
    km += step;
  }
}