#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;


int main()
{
    vector<int>v={10,20,30,1,2,3,4,5};
    for(int val:v)
    {
        cout<<val<<" ";
    }
    //max algo
    int a =6;
    int b =7;
    cout<<endl;
    cout<<"Max of a and b:"<<max(a,b);
    cout<<endl;
    cout<<"Max of a and b:"<<min(a,b);
    
    swap(a,b);
    cout<<endl<<"Swap of a and b:"<<a<<" "<<b;
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"The position of 20:"<<binary_search(v.begin(),v.end(),20);

    int sum = accumulate(v.begin(),v.end(),0);
    cout<<endl<<"Sum of vector:"<<sum;
    sort(v.begin(),v.end());
    for(int val:v)
    {
        cout<<val<<" ";
    }
    auto  it = upper_bound(v.begin(),v.end(),20);
    cout<<endl<<"upper bound of 20: "<<distance(v.begin(),it)<<" Value at that index"<<*it;

    auto it2 = lower_bound(v.begin(),v.end(),20);
    cout<<endl<<"Lower bound of 20: "<<distance(v.begin(),it2)<<" Value at that index"<<*it2;
}