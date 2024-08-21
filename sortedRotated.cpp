#include<iostream>
using namespace std;

int pivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }else{
            e=mid;
        }

        mid=s+(e-s)/2;

    }
    return s;

}

int binarySearch(int arr[],int start,int end, int key)
{
    int s=start;
    int e=end;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }else if(arr[mid]<key)
        {
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return -1;

}

int main()
{
    // sorted rotated array by 2
    int arr[5] = {7,9,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    int pivotElement=pivot(arr,5);
    int ans;
    if (arr[pivotElement]<=k && k<=arr[n - 1]) {
        ans = binarySearch(arr, pivotElement, n - 1, k);
    } else {
        ans = binarySearch(arr, 0, pivotElement - 1, k);
    }

    cout << "Index of element " << k << " is: " << ans << endl;



}