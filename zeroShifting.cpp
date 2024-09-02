#include<iostream>
#include<vector>
using namespace std;

void zeroShifting(vector<int> &v)
{
    int nonZero=0;
    for(int j=0;j<v.size();j++)
    {
        if(v[j]!=0)
        {
            swap(v[j],v[nonZero++]);
        }
    }
}
int main()
{

    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(10);
    v.push_back(0);

    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<"After zero shifting"<<endl;
    zeroShifting(v);
    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}
