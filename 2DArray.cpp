#include<iostream>
using namespace std;
int main(){

    //creating 2d array ==>row and column
    // int arr[3][4];
    //hardcode the array
    int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    //take input--->row wise input if i=0 then j=0,1,2 so row persist and thats why row wise
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }
    //take input --->column wise input if j=0 then i=0,1,2 so column persist and thats why column wise
    // for(int j=0;j<4;j++)
    // {
    //     for(int i=0;i<3;i++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }
   

    
    // displaying 2d array-->row wise
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // displaying 2d array --> col wise
    // for(int j=0;j<4;j++)
    // {
    //     for(int i=0;i<3;i++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

}