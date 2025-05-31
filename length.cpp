//check the length of the string
#include<iostream>
using namespace std;
int main(){
    int n=0;
    char str[n];
    cout<<"enter the string: ";
    cin>>str;
    while(str[n]!='\0'){
        n++;
    }
    cout<<"Length of the string is: "<<n<<endl;
    return 0;
}