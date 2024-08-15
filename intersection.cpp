// [2,2,2,3,4,5] n [2,2,3,4]
#include<iostream>
#include<vector>
using namespace std;




int main()
{
  int array1[]={2,2,2,3,4,5};
  int array2[]={2,2,3,4};
  int s1=sizeof(array1)/sizeof(array1[0]);
  int s2=sizeof(array2)/sizeof(array2[0]);

   int i=0,j=0;
   vector <int> ans;
    while(i<s1 && j<s2)
    {
        if(array1[i]<array2[j])
        {
            i++;
        }else if(array1[i]==array2[j])
        {
            ans.push_back(array1[i]);
            i++;
            j++;
        }else{
            j++;
        }
    }

    for(int k=0;k<ans.size();k++)
    {

        cout<<ans[k]<<" ";
    }

    return 0;
}