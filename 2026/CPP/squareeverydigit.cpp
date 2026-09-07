//Solution for "Square Every Digit" kata
//https://www.codewars.com/kata/546e2562b03326a88e000020/train/cpp


//this is super dirty and not best practice but im tired and want to sleep

#include <iostream>
#include <string>

int square_digits(int num) {
  
  std::vector<int> result;

  //iterate through number and square each digit, then add to vector
  while (num > 0) {
  int digit = num % 10;
  int squared_digit = digit * digit;
  result.push_back(squared_digit);
  num /= 10;
  }
  std::reverse(result.begin(), result.end());

  //join vector (cpp doesnt just have a .join() function 🤮)
  long long solution = 0;
  for (int value : result) {
      if (value < 10) {
          solution = solution * 10 + value;
      } else if (value > 10) {
          solution = solution * 100 + value;
      }
  }

  return solution;

}
