#include<iostream>
using namespace std;

//pivot means simply the partition element generally
int findPivot(int arr[], int n){
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
int main()
{
    int arr[12] = { 8, 7, 9,10,20,0,1,2,3,4,5,6 };
    cout<<"pivot element is : "<<findPivot(arr,12);

    return 0;
}