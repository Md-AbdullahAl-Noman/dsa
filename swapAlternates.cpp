#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


void alternateSwap(int arr[], int size)
{
    for(int i=0;i<size;i+=2)
    {
         if(i+1<size)
         {
            swap(arr[i],arr[i+1]);

         }

    }
}
int main()
{


    int evenArr[6]={1,3,5,7,9,21};
    int oddArr[5]={2,4,6,8,100};

    cout<<"Original Even Array: ";
    printArray(evenArr,6);
    alternateSwap(evenArr,6);
    cout<<"\nAfter Alternate Swap: ";
    printArray(evenArr,6);

    cout<<"\nOriginal Odd Array: ";
    printArray(oddArr,5);
    alternateSwap(oddArr,5);
    cout<<"\nAfter Alternate Swap: ";
    printArray(oddArr,5);
    return 0;
}