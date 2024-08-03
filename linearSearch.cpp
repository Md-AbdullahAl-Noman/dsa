#include<iostream>
using namespace std;

///Linear Search-->Start from one end then check each element one by one untill the desired element is found

bool searchArray(int arr[],int n,int key)
{
  for(int i = 0; i < n; i++)
  {
    if(arr[i] == key)
    {
        return 1;
    }
  }
  return 0;
}




void displaArrays(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
    int key;
    cin>>key;

    int arr[10]={19,2,3,4,5,6,7,1,-21,11};
    //dislpaying array
    // displaArrays(arr,10);

    //searching for key
    bool result = searchArray(arr,10,key);

    if(result)
    {
        cout<<"Element found!";
    }
    else
    {
        cout<<"Element not found!";
    }


}