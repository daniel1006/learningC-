/*  int: means interger and represents a whole number. The value it return will tell our operating system if the program worked or not.
    unsigned int: would mean that a value is only positive or zero.
    main: stands for the main file of our program and as a function is the entry to our program working in a similar way as a power button does on a remote.
    
    The parameters of the function must be put in {} and are standarized in the c++ library.
    <> are used to call on files from this library.

    iostream: stands for input, output stream. This file is capable of printing somthing on the screen.
    std: is short for standard library and acts a container for inputs that we called on earlier. In this case we are calling on the effects of iostream.
    cout: means character out and will output characters on the screen.
*/

#include <iostream>

int main() {
    std::cout << "sup bro"; // this line is called a statement because it tells the opereating system what to do. these lines always end with ;
    return 0; // The return of zero tell the operating system that our function operated correctly. Any other values would indicate an error.
}
