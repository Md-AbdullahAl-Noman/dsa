#include<iostream>
using namespace std;


int countSetBits(int n)
{
    int count=0;
    while(n)
    {
        count+=n&1;
        n=n>>1;
    }
    return count;
}

int setBitsFunc(int a,int b)
{
    int result = a&b;
    return countSetBits(result);

}






int main()
{
    int a,b;
    cin>>a>>b;
    int numberOfSetBits=setBitsFunc(a,b);
    cout<<numberOfSetBits<<endl;
    return 0;
}