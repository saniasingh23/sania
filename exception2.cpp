#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter numerator and denominator"<<endl;
    cin>>a>>b;
    try
    {
        if(b==0){
        throw(b);
        }
        else{
        cout<<"result:"<<a/b;
        }
    }
 catch(int b)
 {
    cout<<"division by zero erroe:cannot divide by zero:";
 }  
 return 0;
} 