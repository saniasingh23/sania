#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isAutobiographical(int number)
{
    string strNum=to_string(number);
    int length=strNum.length();
    vector<int>digitCount(10,0);
    for(char digit:strNum)
    {
        digitCount[digit-'0']++;

    }
    for(int i=0; i<length; ++i)
}




  
