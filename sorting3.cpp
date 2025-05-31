//sort the array in even index places{13,7,6,4,3,15,18,20}using normal sort
#include <iostream>
#include <algorithm> // for sort()
using namespace std;
int main() 
{
    int arr[] = {13, 7, 6, 4, 15, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i+=2)
        cout << arr[i] << " ";
    return 0;
}