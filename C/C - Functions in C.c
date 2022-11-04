// -----------------------------------------------------------
// Exercise
// Write a function kelvin_to_celcius() that takes a temperature in Kelvin and returns the corresponding value in Celsius.
// 
// The function must accept and return an int.
// -----------------------------------------------------------

#include <stdio.h>

int kelvin_to_celcius(int kelvin){
  int celcius = kelvin - 273;
  return celcius;
}