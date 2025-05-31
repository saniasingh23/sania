//program tp find si, ci and both
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float principal,rate,time,si,ci,amount;
    int choice, n;
    cout<<"Enter Prinicipal:";
    cin>>principal;
    cout<<"Enter rate of intrest:";
    cin>>rate;
    cout<<"Enter time(in years):";
    cin>>time;
    cout<<"Choose an option:\n";
    cout<<"1.Simple Intrest\n";
    cout<<"2.Compound Intrest\n";
    cout<<"3.Both\n";
    cout<<"Enter your choice(1/2/3):";
    cin>>choice;
    switch (choice)
    {
    case 1 :
        si = (principal * rate * time) / 100;
        cout << "Simple Interest = " << si << endl;
        break;
    case 2:
        cout << "Enter number of times interest is compounded per year (n): ";
        cin >> n;
        amount = principal * pow(1 + (rate / (100 * n)), n * time);
        ci = amount - principal;
        cout << "Compound Interest = " << ci << endl;        
        break;
     case 3:
        si = (principal * rate * time) / 100;
        cout << "Simple Interest = " << si << endl;
        cout << "Enter number of times interest is compounded per year (n): ";
        cin >> n;
        amount = principal * pow(1 + (rate / (100 * n)), n * time);
        ci = amount - principal;
        cout << "Compound Interest = " << ci << endl;
        break;
    default:
        cout << "Invalid choice." << endl;
        break;
    }
}