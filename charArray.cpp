#include<iostream>
using namespace std;


int main()
{
    cout<<"Enter your name:"<<endl;

    char name[20];
    cin>>name;//cin stops taking input after the space,tab,enter or new line character
    name[2]='\0';//here after my input end there will be a terminator which is \0(null character) to terminate the string
    cout<<"Your name is :"<<name<<endl;
    // cout<<"Position element :"<<name[1]<<endl;
    

    return 0;
}