#include<iostream>
using namespace std;

int main()
{
    string s="geeksforgeeks";
    string s1="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=s[i+1])
        {
            s1+=s[i];
        }
    }
    cout<<s1;


}