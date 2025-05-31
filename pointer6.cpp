/*Multiple Objects of a Class
Create a class Employee and make three objects. Store and display data for three different employees using each object.*/
#include <iostream>
using namespace std;
class Employee{
private:
    string name;
    int id;
    float salary;
public:
    void inputData() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee salary: ";
        cin >> salary;
    }

    void displayData() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};
int main() {
    Employee emp1, emp2, emp3;

    cout << "Enter details for Employee 1:" << endl;
    emp1.inputData();
    cout << "Enter details for Employee 2:" << endl;
    emp2.inputData();
    cout << "Enter details for Employee 3:" << endl;
    emp3.inputData();

    cout << "\nDetails of Employee 1:" << endl;
    emp1.displayData();
    cout << "\nDetails of Employee 2:" << endl;
    emp2.displayData();
    cout << "\nDetails of Employee 3:" << endl;
    emp3.displayData();

    return 0;
}