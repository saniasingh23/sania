#include<iostream>
using namespace std;
class Calculator 
{
    public:
        int add(int a,int b);
};
int Calculator::add(int a, int b) 
{
    return a+b;
}
int main() 
{
    Calculator c;
    cout<<"Sum: "<<c.add(5, 10)<<endl;
    return 0;
}