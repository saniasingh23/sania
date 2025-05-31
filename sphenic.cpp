//check if the number has 8 divisors or not using class and object
#include <iostream>
using namespace std;
class Number {
public:
    int n;
    Number(int num) : n(num) {}
    bool divisors(){
        int count=0;
        for(int i=1;i<=n;i++) {
            if(n%i==0) {
                count++;
                cout<<i<<" ";
                if(count==8) {
                    break; 
                }
            }
        }
        return count==8;
    }
};
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    Number number(num);
    if (number.divisors()) {
        cout<<num<<" has exactly 8 divisors."<< endl;
    } else{
        cout<<num<<" does not have exactly 8 divisors."<< endl;
    }
    return 0;
}