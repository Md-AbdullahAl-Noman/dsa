#include<iostream>
#include<map>
using namespace std;

//map is a collection of key value pair {{key,value},{key,value}}

int main()
{
    map<int,string> m1;
    m1[1]="abc";
    m1[2]="def";
    m1[3]="ghi";
    cout<<m1[1]<<endl;
    cout<<m1[2]<<endl;
    cout<<m1[3]<<endl;
    cout<<m1.size()<<endl;
    for(auto i:m1)
    {   
        //cout<<i<<endl;
        cout<<i.first<<" :"<<i.second<<endl;
    }
    cout<<m1.find(1)->second<<endl;
    map<int,string> m2={
        {1,"Noman"},
        {2,"Shanto"},
    };

    m2.insert({3,"Nasim"});
    auto it=m2.find(2);
    for(auto i=it;i!=m2.end();++i)
    {
        cout<<i->first<<" :"<<i->second<<endl;
    }

    m2.erase(1);
    cout<<"After erase:"<<endl;
    for(auto i:m2)
    {
        cout<<i.first<<" :"<<i.second<<endl;
    }

}