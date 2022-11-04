// -----------------------------------------------------------
// Exercise
// Write a fizzbuzz() function that accepts an int limit as a parameter. The function should have a loop that checks 
// the numbers from 1 to limit, and:
// 
// if the number is divisible by 3 without a remainder, then the word 'Fizz' is displayed on the screen
// if the number is divisible by 5 without a remainder, then the word 'Buzz' is displayed on the screen
// if the number is divisible by both 3 and 5 without a remainder, then the word 'FizzBuzz' is displayed on the screen
// otherwise, the number itself is displayed on the screen
// 
// The function should print the result to the screen.
// 
// fizzbuzz(5);
// // => '1 2 Fizz 4 Buzz'
// fizzbuzz(8);
// // => '1 2 Fizz 4 Buzz Fizz 7 8'
// -----------------------------------------------------------

#include <stdio.h>

void fizzbuzz(int limit){
  for (int i=1; i <= limit; i++){
    if (i % 15 == 0){
      printf("FizzBuzz");
    } else if (i % 3 == 0){
      printf("Fizz");
    } else if (i % 5 == 0){
      printf("Buzz");
    } else {
      printf("%d", i);
    }

    if (i < limit){
      printf(" ");
    }
  }
}