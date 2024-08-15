#include<iostream>
#include<vector>
using namespace std;
// suppose s=5;pair of sum is 5


int main()
{

    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int S=5;
    vector<vector <int>> ans;
    int size=sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr1[i]+arr1[j]==S)
            {   
                vector <int> temp;
                temp.push_back(min(arr1[i],arr1[j]));
                temp.push_back(max(arr1[i],arr1[j]));
                ans.push_back(temp); 
            }
        }

    }

    for(int k=0;k<ans.size();k++)
    {
        cout<<"("<<ans[k][0]<<","<<ans[k][1]<<")"<<" ";
    }
}