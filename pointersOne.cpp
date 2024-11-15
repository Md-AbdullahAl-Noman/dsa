#include<iostream>
using namespace std;

int main(){

    //pointer is used to store the address of the variable.It also stores in the memory with its address

    int num=5;
    // int *ptr;//very bad practice as it is pointing to a memory location that is not known or it can be anywhere in the memory.so avoid this declaration.

    int *ptr=&num; //pointer declaration and initialization..Here & is called the address of operator.
    //there may be different type of pointers like *double,*float,*char, etc depending on the the type of the variable.
    //here this means ptr is a pointer to an integer variable.
    //here &num is the address of the variable num.
    //here *ptr is the value of the variable num.* is called the dereference operator.
    //it is used to get the value of the variable whose address is stored in the pointer.
    cout<<"The value of the integer variable that is pointed by ptr : "<<(*ptr)<<endl;
    cout<<ptr<<endl;
    //if we assign the ponter value to another variable and then modify the variable then the changes will not be reflected in the original variable.so this is called pass by value .
    int num2=(*ptr);
    num2+=10;
    cout<<"value of num2 : "<<num2<<endl;
    cout<<"The original value of num : "<<num<<endl;
    //but if we use pointer to modify the original variable then the changes will be reflected in the original variable.
    *ptr+=5;
    cout<<"Value of the original variable after modifying using pointer: "<<num<<endl;



    return 0;
}