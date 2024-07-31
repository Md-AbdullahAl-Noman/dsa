#include<iostream>
using namespace std;
//(3*n+7)

// int firstAp(int n)
// {
//     return (3*n+7);
// }
////////////3,5,7,9,11....-->nth term?
int nthTerm(int n)
{   int a=3;
    int d=2;
    int nthTerm=(a+(n-1)*d);
    return nthTerm;
    
}
int main()
{   
    int n;
    cin>>n;
    // cout<<firstAp(n);
    cout<<nthTerm(n);

    return 0;
}