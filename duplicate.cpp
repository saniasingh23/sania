//remove the duplicate in the string n print the originals in the string ....giv a diff array for each new element 
#include<iostream>
using namespace std;
int main()
{
    int n=0, j=0;
    char str[100], newStr[100];
    cout<<"Enter the string: ";
    cin>>str;
    while(str[n]!='\0'){
        bool found = false;
    for(int i=0; i<j; i++){
            if(str[n] == newStr[i])
            {
                found = true;
                break;
            }
        }
        if(!found)
        {
            newStr[j] = str[n];
            j++;
        }
        n++;
    }
    newStr[j] = '\0'; // Null-terminate the new string
    cout<<"String after removing duplicates: "<<newStr<<endl;
    
    return 0;
}