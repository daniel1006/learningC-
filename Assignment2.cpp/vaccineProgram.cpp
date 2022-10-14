#include<iostream>

using namespace std;

int main(){
    string userDetails;
   // int locationNum, numOfVaccines;

    cout << "Please enter input information." << endl
         <<  "For example: Lathier_Daniel@2#3" << endl;
    cin >> userDetails; // stores users info from prompt.

    int fullName = userDetails.find("_"); // finds where the _ character is within the data entered by the user.
    string halfString = userDetails.substr(++ fullName) ; // stores the character up till and one less than the _. so if Daniel_ the string would store Daniel.

    int shortenedString = halfString.find("@"); // finds where the @ character is from the data entered by the user.
    string firstName = userDetails.substr(fullName, shortenedString); // this is will seperate the first name of the user.
    string lastName = userDetails.substr(0, -- fullName); // this will seperate the last name of the user.

    string firstNumber = halfString.substr(++ shortenedString, 1); // will print out first number.
    int hashTag = halfString.find("#"); // finds where the # is in the string.
    string secondNumber = halfString.substr( ++ hashTag); // will print out second number.

    string location;
    if (firstNumber == "1")
    {
        location = "Pharmacy";
    } else if (firstNumber == "2")
    {
        location = "Jean Coutu";
    } else if (firstNumber == "3")
    {
        location == "Olympic Stadium";
    } else if (firstNumber == "4")
    {
        location = "Uniprix Clinic";
    } else if (firstNumber == "5")
    {
        location = "Health Center";
    } else if (firstNumber == "6")
    {
        location = "Pharmacy";
    } else if (firstNumber == "7")
    {
        location = "Jean Coutu";
    } else if (firstNumber == "8")
    {
    cout << "Invalid response please enter input information." << endl
         <<  "For example: Lathier_Daniel@2#3" << endl;
        cin >> userDetails;
    } else
    {
    cout << "Invalid response please enter input information." << endl
         <<  "For example: Lathier_Daniel@2#3" << endl;
        cin >> userDetails;
    }

    string endStatement;
    if (secondNumber == "1")
    {
        endStatement = "Please complete the remaining 2 doses.";
    } else if (secondNumber == "2")
    {
        endStatement = "Please complete the remaining 1 doses.";
    } else
    {
        endStatement = "You're up to date with all your doses!";
    }

    cout << lastName << ", " << firstName << " has completed " 
         << secondNumber << " dose(s) of the covid 19 vaccine at " 
         << location << "." << endl << endStatement;
    
return 0;
}