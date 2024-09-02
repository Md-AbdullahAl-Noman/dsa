#include<iostream>
#include<vector>
using namespace std;

 vector<int> revereseVector( vector<int> v,int position)
{
    int s=position+1;
    int e=v.size()-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }     

    return v;
}

void printVector(vector<int> v)
{

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{ 
    vector<int> v={11,12,13,94,55};

    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }

    vector<int> reversedVec=revereseVector(v,2);
    cout<<"Reversed array:"<<endl;
    printVector(reversedVec);     
    // for(int i:reversedVec)
    // {
    //     cout<<i<<" ";
    // }

}