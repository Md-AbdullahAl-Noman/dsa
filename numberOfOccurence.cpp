#include<bits/stdc++.h>
using namespace std;

char numberOfOccurance(string s)
{
    int alphaArr[26]={0};
    for(int i=0;i<s.size();i++)
    {
        char ch=s[i];

        int number =0;
        if(ch>='a'&& ch<='z')
        {
            number=ch-'a';
        }else{
            number=ch-'A';
            
        }
        alphaArr[number]++;
    }

    //index to char
    int max=-1,ans=0;
    for(int i=0;i<26;i++)
    {
        if(alphaArr[i]>max)
        {
            ans=i;
            max=alphaArr[i];
        }
    }
    char result=ans+'a';
    return result;
}
int main()
{   
    string s;
    cin>>s;
   cout<<"Highest number of a character occured in the string: "<<numberOfOccurance(s);




    return 0;
}