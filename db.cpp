//convert decimal number into binary number
#include <iostream>
using namespace std;
int main() 
{
    int decimal, binary=0 , place=1 ;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    while (decimal > 0) 
    {
        int remainder = decimal % 2;
        binary += remainder * place;
        place *= 10;
        decimal /= 2;
    }
    cout << "Binary number: " << binary << endl;
    return 0;
}
