#include<iostream>
using namespace std;
//mountain array pivotal element
int mountainArray(int array[],int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {   
        if(array[mid]<array[mid+1])
        {
            start=mid+1;
        }else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main()
{   int array[5]={3,4,5,2,1};
    int n=5;
    cout<<"Pivotal element is :"<<array[mountainArray(array,n)]<<endl;



}