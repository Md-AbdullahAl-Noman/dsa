#include<iostream>
using namespace std;


int main()
{

 //for(initalization(onetime);condition;updation)-->all param are optional
    int n;
    cout<<"Enter the number:";
    cin>>n;

    // for(int i=1;i<=n;i++)
    // {
    //     cout<<i<<endl;
    // }


    //optional
    // int i=1;
    // for(;;)
    // {
    //     if(i<=n)
    //     {
    //         cout<<i<<endl;
    //     }else{
    //         break;
    //     }
    //     i++;
    // }
    
    
    ////multiple condtion and variables also updation

    // for(int i=2,k=3;i<=n && k<=3;i++,k++)
    // {
    //     cout<<i<<k;
    // }

//sum of 1 to N
//  int sum=0;

//  for(int i=1;i<=n;i++)
//  {
//         sum+=i;

//  }
// cout<<"Sum is:"<<sum<<endl;

//////Fibonacci series-->0,1,1,2,3,5,8,13,21..
// int a=0;
// int b=1;
// cout<<a<<' '<<b<<' ';
// for(int i=0;i<=n;i++)
// {
//   int nextNumber=a+b;
//   cout<<nextNumber<<' ';

//   a=b;
//   b=nextNumber;
// }

////////Pirme or not

bool isPrime=1;

for (int i=2;i<n;i++)
{
    if(n%i==0)
    {
        isPrime=0;
    }

}

if (!isPrime)
{
    cout<<"Not a prime number";
}else{
    cout<<"Prime number";
}

}