#include <iostream>
using namespace std;

int lengthOfString(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
char toLowerCase(char ch)
{
    if (ch>='a'&& ch<='z')
    {
        return ch;
    }else{
        char temp= ch-'A'+'a';
        return temp;
    }
}
void reverseString(char name[])
{
    int start = 0, end = lengthOfString(name) - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}


bool checkPalindrome(char name[])
{
    int start = 0, end = lengthOfString(name) - 1;
     while (start <= end) {
        // Ignore special characters
        if (!((name[start] >= 'a' && name[start] <= 'z') || (name[start] >= 'A' && name[start] <= 'Z'))) {
            start++;
        } else if (!((name[end] >= 'a' && name[end] <= 'z') || (name[end] >= 'A' && name[end] <= 'Z'))) {
            end--;
        } else {
            // Both start and end point to letters, compare them
            if (toLowerCase(name[start++]) != toLowerCase(name[end--])) {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    char name[20];
    cout << "Enter your string to reverse:";
    cin >> name;
    int length = lengthOfString(name);

    cout << "Length of string" << length << endl;
    reverseString(name);
    cout << "Reversed string:" << name << endl;
    if (checkPalindrome(name))
    {

        cout << "Palindrome" << endl;
    }else{
        cout<<"Not a palindrome"<<endl;
    }

    return 0;
}