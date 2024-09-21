#include<iostream>
using namespace std;

int main()
{   
    cout<<"Enter your full name of char array:"<<endl;
    char name[100];
    cin.getline(name,100);

    cout<<name;
    cout<<"Enter your name of std::string object:"<<endl;
    string nameString;
    getline(cin,nameString,',');//read untill a , is encountered.
    cout<<nameString;
   
}