#include<iostream>
#include<algorithm>
using namespace std;


void duplicates(int arr[], int n)
{   
    sort(arr,arr+n);
    bool flag=false;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            if(i==1||arr[i]!=arr[i-2])
            {
                cout<<arr[i]<<" ";
                flag=true;
            }
        }

    }
if (flag==false)
{
    cout<<"No duplicate elements found";
 
}
 

}

int main()
{


    int arr[]={1,2,2,2,4,58,66,58,4,3,3,3};

    int size=sizeof(arr)/sizeof(arr[0]);
    duplicates(arr,size);



    return 0;
}