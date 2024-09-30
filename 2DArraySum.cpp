#include <iostream>
#include <climits>
using namespace std;

void arraySumRow(int arr[][3], int row, int col)
{
    int sum = 0;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout<<"Printing the "<< i <<" row sum:"<<sum<< ' ';
    }
    
};
void arraySumCol(int arr[][3], int row, int col)
{
    int sum = 0;
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            sum += arr[i][j];
        }
        cout<<"Printing the "<< i <<" col sum:"<<sum<< ' ';
    }
    
};
int maxRow(int arr[][3],int row,int col)
{   int maxi=INT_MIN;
    int sum=0;
    int rowIndex=-1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col; j++)
        {
            sum+=arr[i][j];


        }
        if(sum>maxi)
        { 
            maxi=sum;
            rowIndex=i;
        }
    }
    return rowIndex;
}
int main()
{
    int arr[3][3];
    // input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
        
    }
    // display
    //  for(int col=0;col<3;col++)
    //  {
    //      for(int row=0;row<3;row++)
    //      {
    //          cout<<arr[row][col]<<" ";
    //      }
    //      cout<<endl;
    //  }
    // sum
    cout<<"Row wise sum:"<<endl;
    arraySumRow(arr, 3, 3);
    cout<<"Column wise sum:"<<endl;
    arraySumCol(arr, 3, 3);
    cout<<"Max of rows:"<<endl;
    cout<<"The max row index is :"<<maxRow(arr,3,3);

    return 0;
}