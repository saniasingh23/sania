//to check how many vowels are there in the string
#include<iostream>
using namespace std;
int main()
{
    int n=0,v=0;
    char str[n];
    cout<<"enter the string:";
    cin>>str;
    while(str[n]!='\0'){
        if(str[n]=='a'||str[n]=='e'||str[n]=='i'||str[n]=='o'||str[n]=='u'||str[n]=='A'||str[n]=='E'||
            str[n]=='I'||str[n]=='O'||str[n]=='U')
        {
            v++;
        }
        n++;
    }
    cout<<"Number of vowels in the string: "<<v<<endl;
    return 0;
}