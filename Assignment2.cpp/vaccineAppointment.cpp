#include <iostream>
#include <fstream>

using namespace std;

int main(){

    cout << "*************************************************************" << endl;
    cout << "Age    Date    |   Location            |   Schedule" << endl
         << ">=55   Jan.4   |   1.Pharmacy          |   1. 10:00 - 10:15" << endl
         << "50-54  Jan.6   |   2.Jean Coutu        |   2. 10:30 - 10:45" << endl
         << "40-49  Jan.12  |   3.Olympic Stadium   |   2. 11:15 - 11:30" << endl
         << "30-39  Jan.17  |   4.Uniprix Clinique  |   4. 13:30 - 13:45" << endl
         << "20-29  Jan.19  |   5.Health Center     |   5. 15:00 - 15:150" << endl
         << ">= 18  Jan.21  |                       |                    " << endl
         << "< 18     N/A   |   N/A                 |   N/A              " << endl;
    cout << "*************************************************************" << endl;

    int numberOfDoses;
    int userAge;
    string locationNum;
    string scheduleNum;

    cout << "How many covid vaccine dose(s) have you completed? ";
    cin >>  numberOfDoses;

   
    if (numberOfDoses < 3)
    {
        cout << "Please enter your age: ";
        cin >> userAge;
    } else
    {
        cout << "Thank you for using Covid Vaccine Program!";
        return 0 ;
    }
  
    //
    string date;
    if ( userAge < 18)
    {
        for (int i = 0; userAge < 18; i++)
        {
            cout << "Please enter your age: ";
            cin >> userAge;
        }
        cout << "Please enter location number: ";
        cin >> locationNum;

    } else if (userAge >= 18 && userAge <=19)
    {
        date = "Jan.21";
        cout << "Please enter location number: ";
        cin >> locationNum; 
    } else if (userAge >= 20 && userAge <=29)
    {
        date = "Jan.19";
        cout << "Please enter location number: ";
        cin >> locationNum; 
    } else if (userAge >= 30 && userAge <= 39)
    {
        date = "Jan.17";
        cout << "Please enter location number: ";
        cin >> locationNum; 
    } else if (40>= userAge && userAge <=49)
    {
        date = "Jan.12";
        cout << "Please enter location number: ";
        cin >> locationNum; 
    } else if (50>= userAge && userAge <=54)
    {
        date = "Jan.6";
        cout << "Please enter location number: ";
        cin >> locationNum; 
    } else if (userAge >= 55)
    {
        date = "Jan.4";
        cout << "Please enter location number: ";
        cin >> locationNum; 
    }
    
//
    string locationName;
        for (int i = 0; stoi(locationNum) > 5; i++)
        {
        cout << "Please enter location number: ";
        cin >> locationNum; 
        }

        if (locationNum == "1")
        {
            locationName = "Pharmacy";
        } else if (locationNum == "2")
        {
            locationName = "Jean Coutu";
        } else if (locationNum == "3")
        {
            locationName = "Olympic Stadium";
        } else if (locationNum == "4")
        {
            locationName = "Uniprix Clinique";
        } else if (locationNum == "5")
        {
            locationName = "Health Center";
        }  
        
//
    string timing;
        cout << "Please enter schedule number: ";
        cin >> scheduleNum;

        for (int i = 0; stoi(scheduleNum) > 5; i++)
        {
            cout << "Please enter schedule number: ";
            cin >> scheduleNum;
        }

        if (scheduleNum == "1")
        {
            timing = "10:00 - 10:15";
        } else if (scheduleNum == "2")
        {
            timing = "10:30 - 10:45";
        } else if (scheduleNum == "3")
        {
            timing = "11:15 - 11:30";
        } else if (scheduleNum == "4")
        {
            timing = "13:30 - 13:45";
        } else if (scheduleNum == "5")
        {
            timing = "15:00 - 15:150";
        } 
         
         cout << "Your age is " << userAge << ". You appointment to take the vaccine is on " << date << " at " << locationName << " @ "
        << timing << ". Take care!";
           
    
return 0;
}