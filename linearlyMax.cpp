#include<iostream>
#include<limits.h>
using namespace std;
//max of an array

int maxOfArray(int arr[],int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr1[100]={2,65,4,33,88,31,45,22,11,10};
    int size=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"Maximum element is : "<<maxOfArray(arr1,size);


    return 0;
}