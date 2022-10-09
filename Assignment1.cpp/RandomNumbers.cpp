// -----------------------------------------------------
// Assignment (#1)
// Question: (#2)
// File name: (RandomnNumber.cpp)
// Written by: (Daniel Lanthier 40218195)
// For Comp 218 Section EC Winter 2022
// -----------------------------------------------------

/*  This program creates a random number by using the rand object, and is set to the time of the computer so that it may change
    on each iteration. It then uses basic arithmatic to save the individual characters of the 3 digit number within their own integer.
    usin these characters I can then add,subtract,multiply, and divide them by each other. */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {

    cout << "Welcome my name is Daniel Lanthier and I wrote this program." << endl;

    srand(time(0)); // set random number to macth the clock of the computer so that it can change on each iteration.
    int randomNumber = rand() % 899 + 100;  // paramater of random number to be between 100 - 999.
    cout <<  "Your randomly generated number is " <<randomNumber << endl;

    int firstNumber = randomNumber / 100 % 10; // This will divide the randomly generated number by 100, then will print out the remainder after division by 10.
    int secondNumber = randomNumber / 10 % 10;
    int thirdNumber = randomNumber / 1 % 10;

    int sum = firstNumber + secondNumber + thirdNumber; // Addition of the 3 digits.
    cout << "The sum of the 3 digits is " << sum << endl;

    int sub = firstNumber - secondNumber - thirdNumber; // Subtraction of the 3 digits.
    cout << "The subtraction of the 3 digits is " <<sub << endl;

    int mul = firstNumber * secondNumber * thirdNumber; // Multiplication of the 3 digits.
    cout << "The multiplication of the 3 digits is " << mul << endl;

    int div = randomNumber % randomNumber; // Reminder of the whole number.
    cout << "The reminder of the 3 digits is " << div << endl
         <<"Thank you for using Number Generator Program."; 

return 0;
}