#include<iostream>
using namespace std;


int firstOccurance(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;

        }else if(arr[mid]<key)
        {
            start=mid+1;
        }else if(arr[mid]>key)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return ans;
}
int lastOccurance(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;

        }else if(arr[mid]<key)
        {
            start=mid+1;
        }else if(arr[mid]>key)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return ans;
}

int main()
{

    int arr1[6]={1,2,3,3,3,5};
    cout<<"first occurance of 3 is at index "<<firstOccurance(arr1,6,3)<<endl;
    cout<<"last occurance of 3 is at index "<<lastOccurance(arr1,6,3)<<endl;
    return 0;
}