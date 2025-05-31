#include <iostream>
using namespace std;
class student 
{
public:
    string name;
    int roll;
    student(string n, int r) 
    {
        name=n;
        roll=r;
    }
    void display() 
    {
        cout<<"name: "<<name<<" roll: "<<roll<<endl;
    }
};
int main() 
{
    student s=student("John Doe", 101);
    s.display();
    return 0;
}