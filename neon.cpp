#include<iostream>
using namespace std;
int main()
{
    int a, square, sum=0;
    cout<<"Enter a number:";
    cin>>a;
    square=a*a;
    while(square>0)
    {
        sum+=square%10;
        square/=10;
    }
    if(sum=a)
    cout<<a<<" is a Neon number."<<endl;
    else
    cout<<a<<" is NOT a Neon number."<<endl;
    return 0;
}