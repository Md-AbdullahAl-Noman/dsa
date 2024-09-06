#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int>&v,int k)//k-->>is the position to be rotated & means passed by reference as we will modify the original vector
{
    int n = v.size();
 
  vector<int>temp(n);

  for(int i=0;i<n;i++)
  {
    temp[(i+k)%n]=v[i];
  }

  v=temp;
}
int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    int n = v.size();
    cout<<n<<endl;

    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"After rotating:"<<endl;
    rotateArray(v,2);
    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}