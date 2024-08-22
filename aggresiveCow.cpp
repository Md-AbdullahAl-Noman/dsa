#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;
bool isPossible(int arr[],int size,int mid,int cows)
{    
    int cowsNumber = 1;
    int last_position = arr[0];
    for(int i=0;i<size;i++)
    {
         if(arr[i]-last_position>=mid)
         {
             cowsNumber++;
             last_position=arr[i];
             if(cowsNumber==cows)
             {
                 return true;
             }
         }
    }
    return false;
}
int main()
{
    int arr[5]={4,2,1,3,6};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    // sort(arr,arr+size);
    sort(begin(arr),end(arr));
    //no of cows
    int cows = 2;

    int maxi=-1;
    for(int i=0; i<size; i++)
    {
        maxi=max(maxi,arr[i]);
    }
    int s=0;
    int end=maxi;
    // cout<<end;
    int mid = s+(end-s)/2;
    int ans=0;
    while(s<=end)
    {
        if(isPossible(arr,size,mid,cows))
        {
            ans=mid;
            s=mid+1;

        }else{
            end=mid-1;
        }
        mid=s+(end-s)/2;
    }
   cout<<ans<<endl;
    return 0;
}