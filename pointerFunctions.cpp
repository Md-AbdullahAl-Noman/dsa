#include <iostream>
using namespace std;

void checkIt(int *ptr)
{
    cout << *ptr << endl;
}
//when we pass an array it only pass as an pointer to the array itself not the array itself

int checkSum(int arr[], int n)
{
    int sum=0;
    cout<<"The array as pointer :"<<arr<<endl;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int value = 6;
    int *ptr = &value;

    checkIt(ptr);

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr1 = arr;
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n<<endl;
    cout<<checkSum(arr,n)<<endl;

    return 0;
}