#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int>a;
    a.push_back(10);
    for(int val:a)
    {
        cout<<val<<endl;
    }
    cout<<a.capacity()<<" ";//allocated space for vector
    a.push_back(20);
    cout<<a.capacity()<<" ";
    a.push_back(30);
    cout<<a.capacity()<<" ";//capacity doubles when it reaches the limit
    cout<<endl;

     for(int val:a)
    {
        cout<<val<<" ";
    }
    a.pop_back();
    cout<<"after pop element"<<endl;
    for(int val:a)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<a.size()<<endl;//size of vector ;how many elements are in vector
    a.clear();
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl; //after clear operation,capacity remains same as before

    cout<<"After clear the vector: "<<endl;
     for(int val:a)
    {
        cout<<val<<" ";
    }
 
    cout<<"Printing vector b: "<<endl;

    vector<int>b(5,2);
    cout<<b.size()<<endl;
    cout<<b.capacity()<<endl;
    for(int val:b)
    {
        cout<<val<<" ";
    }

    b.push_back(10);
    b.push_back(20);
    cout<<b.size()<<endl;
    cout<<b.capacity()<<endl;
    cout<<endl;
    cout<<b.at(5);
    cout<<b.front();
    cout<<b.back();
    // cout<<b.begin()<<endl;
    // cout<<b.end()<<endl;
    cout<<"Printing vector c: "<<endl;
    vector<int> c(b);
    for(int val:c)
    {
        cout<<val<<" ";
    }

    vector<int> d={1,2,3,4,5};
    for(int val:d)
    {
        cout<<val<<" ";
    }
    return 0;
}



