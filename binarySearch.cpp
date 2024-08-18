#include<iostream>
using namespace std;


int binarySearch(int arr[],int size ,int key)
{
    int start=0;
    int end=size-1;
    // int mid=(start+end)/2;
    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }else if(arr[mid]<key)
        {
            start=mid+1;
        }else{
            end=mid-1;
        }
        // mid=(start+end)/2;
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{

    int even[6]={4,6,8,10,12,14};
    int odd[7]={3,5,7,9,11,13,15};

    int evenIndex=binarySearch(even,6,10);
    cout<<"Even index is"<<" "<<evenIndex<<endl;
    int oddIndex=binarySearch(odd,7,15);
    cout<<"Odd index is"<<" "<<oddIndex<<endl;

    return 0;
}