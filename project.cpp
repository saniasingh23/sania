#include<iostream>
#include<fstream>
using namespace std;
int  main()
{
    string str;
    ofstream Myfile1("test.txt");
    ifstream Myfile2("test.txt");
    if (Myfile1.is_open())
    {
        Myfile1<<"This is a trial input\n";
        Myfile1<<"for our projects\n";
        Myfile1.close();
    }
    else cout<<"File opening is fail."<<endl;
    if (Myfile2.is_open())
    {
        while(getline (Myfile,str))
        {
            cout<<str<<endl;
        }
        Myfile2.close();
    }
    else
    cout<<"File openong if fail."<<endl;
    return 0;
}