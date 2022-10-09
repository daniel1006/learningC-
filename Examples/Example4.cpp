#include <iostream>
#include <cmath>

using namespace std;

int main() {

    string building, affliction, noun; 

    cout << "Enter a kind building you would find in a town ";
    getline(cin, building); 
    cout << "Enter an affliction ";
    getline(cin, affliction); 
    cout << "Enter a shocking noun ";
    getline(cin, noun); 

    cout << "Sir Johny, went to visit his aunt who lived next to the " << building <<endl;
    cout << "she had a " << affliction << " so Johny, tried his best to take care of her" <<endl;
    cout << "But this time when he walked into her home he found " << noun <<endl;


return 0;
}