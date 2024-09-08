#include<iostream>
#include<vector>
using namespace std;

vector<int> addVector(vector<int>&v1,int n,vector<int>&v2,int m)
{
    int i=n-1,j=m-1;
    vector<int> ans;
    int carry=0;
    while (i>=0 && j>=0)
    {
        int sum=v1[i]+v2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        

        i--;
        j--;
    }

    //first case
    while (i>=0)
    {
        int sum = v1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        

        i--;
        
    }
    //second case
    while (j>=0)
    {
        int sum=v2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        
        j--;
    }
    //third case
    while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    return ans;
}

vector<int> reverseVector(vector<int>& v)
{
    int start=0;
    int end=v.size()-1;
    while(start<end)
    {
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}

int main()
{

    vector<int> v1={1,2,3,4,5,6};
    int size1=v1.size();

    vector<int> v2={7};
    int size2=v2.size();

    
    vector<int> result=addVector(v1,size1,v2,size2);
    result=reverseVector(result);
    for(int val:result)
    {
        cout<<val;
    }
    return 0;
}