#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid)
{
    int student=1;
    int pageSum=0;
    for(int i=0;i<n;i++)
    {
        if(pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
        }else{
            student++;
            if(student>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }

    }
    return true;
}


int main()
{

    // int arr[5]={10,20,30,40,50};//books pages
    int arr[4]={12, 34, 67, 90};//books pages
    int m=2;//number of students
    int n=4;//number of books
    int ans=-1;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];


    }
    int s=0;
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e)
    {

         if(isPossible(arr,n,m,mid))
         {
             ans=mid;
             e=mid-1;
         }else{
             s=mid+1;
         }
         mid=s+(e-s)/2;
    }

    cout<<ans<<endl;

}