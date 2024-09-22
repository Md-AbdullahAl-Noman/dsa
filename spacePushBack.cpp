#include<iostream>
using namespace std;

//when there is a space in the string add @50 in that position

int main()
{

    cout<<"Enter your string to add your additions:"<<endl;
    string s;
    getline(cin,s);
    // cout<<s;
    // string temp;
    // for (int i = 0; i < s.length(); i++)
    // {   
    //     if(s[i]==' ')
    //     {
    //         temp.push_back('@');
    //         temp.push_back('5');
    //         temp.push_back('0');
    //     }else{
    //         temp.push_back(s[i]);
    //         }

    // }
    // cout<<temp;

   string result;
   for(int i=0;i<s.length();i++)
   {
    if(s[i]==' ')
        result+="@50";
    else
        result+=s[i];

   }

   cout<<result;
    return 0;
}