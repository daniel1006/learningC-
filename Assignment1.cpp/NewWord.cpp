// -----------------------------------------------------
// Assignment (#1)
// Question: (#3)
// File name: (NewWord.cpp)
// Written by: (Daniel Lanthier 40218195)
// For Comp 218 Section EC Winter 2022
// -----------------------------------------------------

/* The following program starts by prompting the user to enter 3 words and then 3 numbers that are less than the total number of characters 
   of that original word. It does this with the use of arrays and the lenght function. It then uses a loop to determine if the entered nubmers 
   are even or odd. This will determine if each of the words that correspond to their number start at the first or second letter which
   is done with the use of the substr functioon. Once this has been figured out the program will print a new word by combining each of the 
   altered words into one. */

#include <iostream>
#include <cmath>
#include <stdlib.h>  

using namespace std;

int main() {
    string enteredWord[3]; // For the 3 first words entered by the user which are stored in an array with 3 objects.
    int enteredNum[3]; // For the numbers that are less than the character of the entered word which are also stored in an array with 3 objects.
    int numberOfElements = sizeof(enteredNum) / sizeof(enteredNum[0]);
    /* As best I could tell there was no premade c++ function that counted the number of object in an array so this was my best guess at what to do.
       The above line of code uses the function sizeOf to determine how many bytes are stored in the array 'enteredNum' and then divide that by a single
       element of that same array. And because the enteredNum array is an integer type each element has the same size integer. What this means is that
       if we divide the total number of elements in the array(3), by a single element(1), we can then know the total number of element in the array = 3.  
       This final value (3), is now stored in the interger numberOfElements. I use this later on in the code for a for loop.*/

    cout << "*****************************************" << endl
         << "Welcome to New word program" << endl
         << "***************************************** \n\n" ;

    cout << "Please enter 3 seperate words. " << endl;
    cin >> enteredWord[0];//The 3 entered words stored in the first 3 objects of the array.
    cin >> enteredWord[1];
    cin >> enteredWord[2];
     

    cout << "Please enter the first number less than " << enteredWord[0].length() << ": \n"; // Prints out character lenght of entered word.
    cin >> enteredNum[0]; // where entered number is stored in each element of its array.
    cout << "Please enter the first number less than " << enteredWord[1].length() << ": \n"; 
    cin >> enteredNum[1]; 
    cout << "Please enter the first number less than " << enteredWord[2].length() << ": \n"; 
    cin >> enteredNum[2]; 

    cout << "Your new word is: ";
    for (int i = 0; i < numberOfElements; i++) // This is a for loop that starting at the first element of the numberOfElements array will continue to push 
    {                                          // each element one by one through the loops paramaters until the condition(i) is less than the number of 
                                               // of elements in the array(3).
    {
          if ( enteredNum[i] % 2 == 0)  // This if statement looks at the entered number by the user divides it by zero and if the remainder = 0 we can determine in that number is even or odd.
             cout << enteredWord[i].substr(0); // for even number. The for loop also runs through each element of the enteredWord array which is what will combine the new words in order.
          else
            cout << enteredWord[i].substr(1); // for odd number. The substr here, will start printing the new word at and including its second character.
    }      
    }

    cout <<"\n\nThank you for using New Word Program!";
return 0;
}