//find the marks
#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string name;
    int marks[3], total = 0;
    const int passing_marks = 150;
    cout << "Enter student's name: ";
    getline(cin, name);
    for (int i = 0; i < 3; i++) 
    {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }
    cout << "\nStudent Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    if (total >= passing_marks) {
        cout << "Result: Passed\n";
    } else {
        cout << "Result: Failed\n";
    }
return 0;
}