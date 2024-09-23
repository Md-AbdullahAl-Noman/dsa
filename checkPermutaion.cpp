#include<iostream>
#include<vector>
using namespace std;

bool isPermutation(string s1,string s2)
{
    int s1_len=s1.length();
    int s2_len=s2.length();

    vector<int> s1_count(26,0);
    vector<int> s2_count(26,0);

     if (s1_len > s2_len) {
        return false;
    }
    //freq count of first window(subsequent or subset of original data) or
    // sliding means moving one element at a time and each step compare with a portion of string with window.
    //first window freq count and 
     for(int i=0;i<s1_len;i++)
     {
        s1_count[s1[i]-'a']++;
        s2_count[s2[i]-'a']++;
     }
     //compare
     if(s1_count==s2_count)
        return true;

    //moves the window
    for(int i=s1_len;i<s2_len;i++)
    {
        s2_count[s2[i]-'a']++;
        s2_count[s2[i-s1_len]-'a']--;

        //compare
        if(s1_count==s2_count)
          return true;

    }
    return false;
}
int main()
{
    string s1("ab");
    string s2("eidbabooo");
    // cout<<s1;
    // cout<<s2;
    if(isPermutation(s1,s2))
    {
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;




}