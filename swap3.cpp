//swaping of two numbers  using * and / 
#include <iostream>
using namespace std;
int main() 
{
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout << "After swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
