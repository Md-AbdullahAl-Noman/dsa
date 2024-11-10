#include<iostream>
#include<vector>
using namespace std;
//the columns of vector will be printed as wave 0th column->top to bottom and 1st column->bottom to top this way
vector<int>waveof2DVector(vector<vector<int>> &vect,int rows,int columns){
    vector<int> result;
   for(int i=0;i<columns;i++)
   {
        if(i&1)
        {//means odd
            for(int k=rows-1;k>=0;k--)
            {
               result.push_back(vect[k][i]);
            }
           
        }else{
            //means even
            for(int j=0;j<rows;j++)
            {
               result.push_back(vect[j][i]);
            }
           
        }

   }

   return result;
}
int main(){
vector<vector <int>> vec={{1,2,3},{4,5,6},{7,8,9}};
for(int i=0;i<vec.size();i++){
    for(int j=0;j<vec[i].size();j++)
    {
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;


}
cout<<"The waved form:"<<endl;
int rows=vec.size();
int columns=vec[0].size();
vector<int> newvect=waveof2DVector(vec,rows,columns);
for(int i=0;i<newvect.size();i++)
{
    cout<<newvect[i]<<" ";
}
cout<<endl;
return 0;
}
