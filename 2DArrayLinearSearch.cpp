#include<iostream>
using namespace std;
bool isFound(int arr[][3],int row,int col,int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==target)
                return true;
        }
    }
    return false;
}
int main()
{
  int arr[2][3]={1,2,4,6,8,10};
//   for(int row=0;row<2;row++)
//   {
//     for(int col=0;col<3;col++)
//     {
//       cout<<arr[row][col]<<" ";
//     }
//     cout<<endl;
//   }
//linear search
int target=1;
if(isFound(arr,2,3,target))
{
    cout<<"Found the element";
}else{
    cout<<"Not found";
}
}