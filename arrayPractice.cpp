#include<iostream>
using namespace std;


void printArray(int arr[5],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{

 int array1[5]={1,3,5,7,9};
//  cout<<array1<<endl;
//  cout<<array1[0];
//  cout<<array1[1];
printArray(array1,5);
cout<<endl;
//all elements zero

int array2[10]={0};

printArray(array2,5);
cout<<endl;
//all elements 1
int array3[10]={0};

for(int i=0;i<10;i++)
{
    array3[i]=1;
}
printArray(array3,10);
cout<<endl;


}