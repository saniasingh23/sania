#include <iostream>
using namespace std;
int main() 
{
    int n, number, sum = 0;

    cout << "Enter how many numbers you want to square and sum: ";
    cin >> n;
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) 
    {
        cin >> number;
        sum += number * number; 
    }
    cout << "The total sum of squares is: " << sum << endl;
    return 0;
}
