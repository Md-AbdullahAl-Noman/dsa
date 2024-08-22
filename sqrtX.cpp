#include<iostream>
using namespace std;
//using binary search

int sqrtX(int n)
{
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)

    {   
        int square=mid*mid;
        if(square==n)
        {
            return mid;
        }

        if(square<n)
        {   
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }

        mid=s+(e-s)/2;

    }

    return ans;

}

double precisionTill(int n ,int precision,int tempSol)
{
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        for (double j=ans;j*j<n;j=j+factor)
        {
            ans=j;
        }


    }

    return ans;

}
int main()
{

    int n=27;
    cout<<"Sqaure root of "<<n<<" is "<<sqrtX(n);
    int intPart=sqrtX(n);
    cout<<endl<<"Sqaure root of "<<n<<" is "<<precisionTill(n,3,intPart);



    return 0;
}