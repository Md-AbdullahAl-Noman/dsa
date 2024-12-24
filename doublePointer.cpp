#include<iostream>
using namespace std;
int main(){
    cout<<"Double pointer game staterd"<<endl;

    int a=10; // a is a variable of type int and it is initialized with value 10 means there is a varibale which has a address in memory lets say 7001 and there stored a value which is 10
    //to create a pointer or referencing a variable using pointer use int* which is a pointer to a variable of type int.
    int *p=&a; // here p is a pointer to an integer variable. &a means the address of the variable a.

    cout<<"The value of a is :"<<a<<endl;
    cout<<"The address of a is :"<<&a<<endl;//0x61ff08
    cout<<"The value of p is same as the address of the variable a :"<<p<<endl;//0x61ff08
    //double pointer is used to store the pointer reference of a pointer variable.to create a pointer suppose type is interger then write the type then a start .ex. if int var ,to create a pointer write int * .so if it is int *p then write int* and another start to crate pointer to pointer write int **q which is the pointer to pointer variable p.
    int **q=&p;
    cout<<"The value of q is an address of p means the content of the q which is the refrencing address of p pointer:"<<q<<"same as &p :"<<&p<<endl;
    cout<<"The value of *q is the value of p which is the address of a :"<<*q<<endl;
    cout<<"The value of **q is the value of a :"<<**q<<endl;

 return 0;
}