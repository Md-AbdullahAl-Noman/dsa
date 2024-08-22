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
int main()
{

    int n=25;
    cout<<"Sqaure root of "<<n<<" is "<<sqrtX(n);



    return 0;
}