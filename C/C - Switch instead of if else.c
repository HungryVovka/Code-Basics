// -----------------------------------------------------------
// Exercise
// Write a number_printer() function that takes a single number from 0 to 3 as a parameter 
// and prints its English equivalent to the screen.
// 
// For example, for 2 it should display the word "Two". If the number is less than 0 or 
// greater than 3, then the number itself should be displayed without any conversions. 
// Your function should use switch to test for a number.
// -----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

void number_printer(int num){
  switch (num){
    case 0: printf ("Zero"); break;
    case 1: printf ("One"); break;
    case 2: printf ("Two"); break;
    case 3: printf ("Three"); break;
    default: printf("%d", num);
  }
}