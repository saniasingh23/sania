#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    char ch = 'A';
    for (int i = 0; i < rows; i++) 
    {
        // Print leading spaces
        for (int space = 0; space < i; space++) {
            cout << " ";
        }

        // Print characters with space
        for (int j = 0; j < rows - i; j++) {
            cout << ch << " ";
        }

        cout << endl;
        ch++;
    }

    return 0;
}
