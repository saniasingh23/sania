//spit the integer using modulus remainder operator
#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Digits (in reverse order): ";
    while (number > 0) 
    {
        int digit = number % 10;  // Get the last digit
        cout << digit << " ";
        number = number / 10;     // Remove the last digit
    }
    return 0;
}
