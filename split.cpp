//split the integer using modulus
#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Digits: ";
    while (number > 0) 
    {
        int digit = number % 10;     // Get last digit
        cout << digit << " ";
        number = number / 10;        // Remove last digit
    }
    return 0;
}
