#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    try
    {
        if(age<18)
        throw(age);
        else
        cout<<"Acess given";
    }
 catch(int a)
 {
    cout<<"access denied:min age shld be 18:u r below 18";
 }  
 return 0; 
}