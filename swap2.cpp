//swaping of two numbers without using temporary variable
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Swapping using a temporary variable
    a=a+b;
    b=a-b;
    a=a-b;

    cout << "After swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
