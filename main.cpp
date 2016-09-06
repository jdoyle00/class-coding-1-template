#include <iostream>
#include <vector>
#include <stack>

namespace part1 {
void sample() {
  int length, width;
  int perimeter, area;

  //TODO 1.1 Accept the length and with as inputs
  std::cout << "Please enter the length: ";
  std::cout << "Please enter the width: ";
  
  //TODO 1.2 Calculate the perimeter and area

  //TODO 1.3 Print the perimeter and area

}
}

namespace part2 {
void sample() {
  //TODO 2.1 Declare two vectors of type int

  //TODO 2.2 Initialize first with 1s and the second with 4s (both are of size 10)

  //TODO 2.3 Print the capacities and sizes of both

  //TODO 2.4 Print all elements inside the first vector

  //TODO 2.5 Print all elements inside the second vector

  //TODO 2.6 Add all elements of the second array into the first array, ie V1[i] = V1[i] + V2[i]

  //TODO 2.7 Print all elements inside the first vector

}
}

namespace part3 {
void sample() {
  //TODO 3 print the following:
  /*
   *      0
          0  1
          0  1  2
          0  1  2  3
          0  1  2  3  4
          0  1  2  3  4  5
   */


}
}

namespace part4 {
void sample(std::string s1, std::string s2) {
  //TODO 4 Use a stack to determine if the strings are palindrome

  bool isPalindrome = true;

  isPalindrome ? std::cout << "Is palindrome" : std::cout << "Strings are not palindromes";

}
}

int main() {
  std::cout << "Welcome to In-class coding session 1" << std::endl;
  //part1::sample();
  //part2::sample();
  //part3::sample();
  //part4::sample("aaabaaa", "aaabaaa");

  return 0;
}