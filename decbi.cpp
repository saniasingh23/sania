//convert binary to decimal
#include<iostream>
using namespace std;
int main()
{
    int binary, decimal=0, place=1, remainder;
    cout<<"Enter a binary number:";
    cin>>binary;
    while(binary>0)
    {
        remainder=binary%10;
        decimal+=remainder*place;
        binary/=10;
        place*=2;
    }
    cout<<"Decimal number:"<<decimal<<endl;
    return 0; 
}