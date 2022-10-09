#include <iostream>
#include <string>

using namespace std;

int main() {

    int quarters, dimes, nickles;
    cout << " Enter number of quarters: ";
    cin >> quarters;

    cout << " Enter number of dimes: ";
    cin >> dimes;

    cout << " Enter number of nickles: ";
    cin >> nickles;

    int total = 5 * quarters + 10 * dimes + 5 * nickles;
    cout << " The total amount is: " <<(total/100) << " dollar and " << (total % 100) << " cents." << endl; 

    return 0;
}