#include<iostream>
#include<set>
using namespace std;


int main(){

 set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(15);
    s.insert(15);
    s.insert(25);
    s.insert(35);

    for(auto v:s)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    set<int>::iterator it=s.begin();
    cout<<*it<<endl;
    // cout<<s.find(15)<<endl;
    s.erase(s.find(5),s.end());
    for(auto v:s)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    //added 

}