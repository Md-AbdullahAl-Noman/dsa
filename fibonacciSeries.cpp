#include<iostream>
using namespace std;

 int Fibbonaccifunction(int n)
 {
    int a=0;
    int b=1;
    int nextNumber;
    for(int i=1;i<=n;i++)
    {
    nextNumber=a+b;
    a=b;
    b=nextNumber;

    // cout <<nextNumber<<endl;
    }
    return nextNumber;
 }
int main()
{
    int n;
    cin>>n;

    cout<<Fibbonaccifunction(n)<<endl;
    
    return 0;
}