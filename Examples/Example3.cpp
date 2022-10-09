#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    double number1, number2;
    char sign;

    cout << "Enter the first number ";
    cin >> number1;
    cout << "Enter the operator ";
    cin >> sign;
    cout << "Enter the second number ";
    cin >> number2;

    double response;

    if(sign == '+') {
        response = number1+number2;
} else if (sign == '-')
{
        response == number1-number2;
} else if (sign == '/')
{
    response == number1/number2;
} else if (sign == '*')
{
    response == number1*number2;
} else
{
    cout << "operator is invalid";
}

    cout << response;

    return 0;
}
