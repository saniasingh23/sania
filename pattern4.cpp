#include <iostream>
using namespace std;
int main() 
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    char ch='A';
    for (int i = 1; i <= rows; i++) 
    {
        ch='A';
        for (int j = 1; j <= i; j++) 
        {
            cout << ch <<" ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}