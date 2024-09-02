#include<iostream>
using namespace std;

void mergedToArrThree(int arr1[],int arr2[],int arr3[],int size1,int size2)
{
    int i=0,j=0,k=0;

    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<size1)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<size2)
    {
        arr3[k++]=arr2[j++];
    }


}

void printArray(int arr3[],int s3)
{
    for(int i=0;i<s3;i++)
    {
        cout<<arr3[i]<<" ";
    }
}

int main()
{

    int arr1[]={1,3,5,7,9,11};
    int arr2[]={2,4,6,8};
    
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<size1<<endl;
    cout<<size2<<endl;
    
    int s3=size1+size2;
    int arr3[20]={0};
    mergedToArrThree(arr1,arr2,arr3,size1,size2);
    printArray(arr3,s3);


    return 0;
}