/*
    As a reminder an integer can only store a single decimal so when you're working with decimals you need to use a double.
    Char, will store a single character.
    Booleans set a value to true or false.
    strings, are a type of object that represent a sequence of text.
*/


#include <iostream>
#include <string>

using namespace std;

    int main() {

    int age = 22; //Interger
    double networth = 757.56; //Double

    char grade = 'A';
    char currentcy = '$'; // the dollar sign like a letter is a character. 

    bool student = true; // True state of Boolean.
    bool poor = true;

    std::string name = "Daniel"; // String
    std::string address = "12A Sankt Erickgatan";

    std::cout << " Hello " << name << " and I live at " << address << endl; 

    return 0;
}