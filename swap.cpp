//swaping of two numbers using temporary variable
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Afetr swapping:\n";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}