#include<iostream>
using namespace std;


bool isPrime(int n)
{   
    if (n<=1){
        return 0;

    }

    for (int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
   if(isPrime(n))
   {
       cout<<"Prime number"<<endl;
   }else{
       cout<<"Not a Prime number"<<endl;
   }
    return 0;
}