#include<iostream>
#include<limits.h>
using namespace std;

int maxElement(int arr[],int size)
{   
    int maximum=INT_MIN;
    for(int i=0;i<size;i++) 
    {
        // if(arr[i]>max)
        // {
        //     max=arr[i];
        // }
        maximum=max(maximum,arr[i]);//using max mehtod
        
    }
    return maximum;
}


int minElement(int arr[],int size)
{
        int min=INT_MAX;
        for(int i=0;i<size;i++){
            
        if(arr[i]<min)
        {
            min=arr[i];
        }

        
        }

        return min;
}
int main()
{

    int n;
    cout<<"Enter your number for the array to find max and min : ";
    cin>>n;
    int arr[100];
    //array element input
    cout<<"Enter array element :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    cout<<"Maximum element is : "<<minElement(arr,n)<<endl;
   cout<<"Minimum element is :"<< maxElement(arr,n);

    return 0;
}