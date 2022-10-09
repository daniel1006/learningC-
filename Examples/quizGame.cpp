#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    double randomNumber;
    int guessCount(1);

    cout << "pick a number between 1 and 100" << endl;
    cin >> randomNumber;

        while (randomNumber != 25) {
            cout << "Not quite try again." << endl;
            cin >> randomNumber;
            guessCount++;
            cout << guessCount << " Guess has been made" << endl;       
        }

    if (randomNumber == 25)
    {
        cout << "Congrats you got it!" << endl;
    } else
    {
        cout << "Invalid number";
    }
    
    

return 0;
}