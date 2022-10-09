/* variables in programming are used to temporarily store data in the computers memory. But because the value can change its called a variable.
   int: a variable that stores a whole number to be displayed on screen.
   double: is a varibale that stores a number with a decimal point.
*/

#include <iostream>

int main() {
    int file_size; // file_size declares the variable of int so that it can be called on,
    // while its not best practice you can declare multiple variables on the same line as follows: "in file_size = 0, counter = 5"
    file_size = 100; // here the varible is being called and is assigned a value of 100.
    // to make the code shorter you could have initialized the varible as follows: "int file_size = 100;"

    double total_cost = 9.99; 

    std::cout << file_size;
    return 0;
}

