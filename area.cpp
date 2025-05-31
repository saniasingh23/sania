#include <iostream>
using namespace std;    
class Rectangle 
{
private:
    int length;
    int width;
public:
    void setValues(int l, int w) 
    {
        length=l;
        width=w;
    }
    int getArea() 
    {
        return length * width;
    }
};
int main() 
{
    Rectangle r;
    int length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    r.setValues(length, width);
    cout << "Area of the rectangle: " << r.getArea() << endl;
    return 0;
}