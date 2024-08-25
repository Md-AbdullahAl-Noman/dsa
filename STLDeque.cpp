#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{   //double ended queue
    deque<int> d1={1,2,3,4,5,50,12,18};
    cout<<d1.size()<<endl;
    cout<<d1.at(3)<<endl;
    d1.push_back(10);
    for(int val:d1)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    d1.push_front(20);
    for(int val:d1)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<d1.size()<<endl;
    d1.pop_back();
    for(int val:d1)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    d1.pop_front();
    for(int val:d1)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    sort(d1.begin(),d1.end());

    for(int val:d1)
    {
        cout<<val<<" ";
    }
    cout<<"After sort"<<endl;
    cout<<d1.size()<<endl;

    d1.erase(d1.begin(),d1.begin()+3);
    cout<<d1.size()<<endl;
    for(int val:d1)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    sort(d1.begin(),d1.end(),greater<int>());//opposite is less<int>() which is by default

    for(int val:d1)
    {
        cout<<val<<" ";
    }
    return 0;
}