#include <iostream>
using namespace std;
int main() 
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++) 
    {
        for (int space = 0; space < i; space++) 
        {
            cout << " ";
        }
        for (int j = 0; j < rows - i; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
