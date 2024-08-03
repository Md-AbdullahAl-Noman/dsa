#include<iostream>

using namespace std;

int sumofArray(int array[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=array[i];

    }
    return sum;
}

int main()
{

    int n;
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int sum = sumofArray(arr, n);
    cout<<"Sum of array is : "<<sum;
    return 0;
}