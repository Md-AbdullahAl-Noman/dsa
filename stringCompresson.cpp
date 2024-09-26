#include<iostream>
#include <string.h>
using namespace std;
int stringCompressed(char chars[],int n)
{   
    
    int index=0;
    for(int i=0;i<n;i++)
    { 
        char currentChar=chars[i];
        int count=1;
        
        while(i+1<n&&chars[i+1]==chars[i])
        {
            ++count;
            ++i;
        }

        //insert the current char to compressed string index position
        chars[index]=currentChar;
        index++;
        //insert the count to the character next to the character by converting count to string 
        //and if more than 1 char in the string then insert the first char then the second char and so on not the whole string or count like 12 .
        //instead it will be 1,2
        if(count>1)
        {
            string countStr=to_string(count);
            for(char ch:countStr)
            {
                chars[index]=ch;
                index++;
            }
        }

    


    }

    return index;
    
}
int main()
{
    char chars[]={'a','a','a','b','b','c','c'};
    // int n=sizeof(chars)/sizeof(chars[0]);
    int n=strlen(chars);

    int newIndex=stringCompressed(chars,n);

    for(int i=0;i<newIndex;i++)
    {
        cout<<chars[i];
    }

}