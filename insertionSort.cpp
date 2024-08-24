#include<iostream>
using namespace std;

int main()
{   

    int arr[]={4,3,2,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<size;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];//shifting to right position
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }


    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}