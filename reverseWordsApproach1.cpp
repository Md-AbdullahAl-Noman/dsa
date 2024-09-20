#include<bits/stdc++.h>
using namespace std;

int main()
{
//reverse the words of an string
 string s = "The Sky is blue";

 vector<string>words;
 string word;


stringstream ss(s);
 //extract words and store it on the word variable through >> operator
while(ss>>word)
{
    words.push_back(word);
}
//reverse the string vector
reverse(words.begin(),words.end());
// for(auto x:words)
// {
//     cout<<x<<" ";
// }

//string creation
string reversedString;
for(size_t i=0;i<words.size();i++)
{
    reversedString+=words[i];
    if(i!=words.size()-1)
    {
        reversedString+=" ";
    }
}

cout<<reversedString;

    return 0;
}