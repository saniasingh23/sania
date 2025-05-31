#include <iostream>
using namespace std;
class Circle 
{
private:
    float radius;
public:
    void inputRadius()
    {
        cout<<"Enter radius of the circle: ";
        cin>>radius;
    }
    float calculateArea() 
    {
        return 3.14 * radius * radius; 
    }
};
int main() 
{
    Circle c;
    c.inputRadius();
    cout<<"Area of the circle: "<<c.calculateArea()<<endl;
    return 0;
}