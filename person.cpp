#include <iostream>
using namespace std;
class Person 
{
public:
    string name;
    int age;
    void setValues(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() 
{
    Person p;
    string name;
    int age;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    p.setValues(name, age);
    p.display();

    return 0;
}