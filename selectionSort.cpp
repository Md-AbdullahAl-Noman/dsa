#include<iostream>
using namespace std;

int main()
{


    // int arr[5]={7,1,4,3,9};
    int arr[10]={10,9,8,7,6,50,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size-1;i++)
    {
        int minimumIndex=i;

        for (int j=i+1;j<size;j++)
        {
            if(arr[minimumIndex]>arr[j])
                minimumIndex=j;
        }
        

        swap(arr[minimumIndex],arr[i]);

    }

    //printing sorted array

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }




    return 0;
}
