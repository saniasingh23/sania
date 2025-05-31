//program to find compound intrest
#include <iostream>
#include <cmath> // for pow()
using namespace std;
int main() 
{
    float principal, rate, time, compoundInterest, amount;
    int n;
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Rate of interest: ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;
    cout << "Enter number of times interest is compounded per year (n): ";
    cin >> n;
    amount = principal * pow(1 + (rate / (100 * n)), n * time);
    compoundInterest = amount - principal;
    cout << "Compound Interest is: " << compoundInterest << endl;
    return 0;
}
