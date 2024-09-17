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
    while (start <= end)
    {
        if (name[start++] != name[end--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char name[5];
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