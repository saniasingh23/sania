#include <iostream>
using namespace std;
int main() 
{
    float principal, rate, time, simpleInterest;
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Rate of interest: ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;
    simpleInterest = (principal * rate * time) / 100;
    cout << "Simple Interest is: " << simpleInterest << endl;
    return 0;
}
