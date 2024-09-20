#include<bits/stdc++.h>
using namespace std;


int main()
{   string s="The sky is blue oh";

    string word;
    vector<string> words;
    string result;

      // Iterate over each character in the string
    for (char c : s) {
        if (c == ' ') {         // If the character is a space
            words.push_back(word);  // Push the current word to the words vector
            word = "";          // Reset word to start a new one
        } else {
            word += c;          // Add the current character to the word
        }
    }
    
    // Add the last word to the vector after the loop ends
    words.push_back(word);

    // Build the reversed words into the result string
    for (int i = words.size() - 1; i >= 0; --i) {
        result += words[i];      // Append the word to the result string
        if (i != 0) {            // Add a space between words, but not after the last word
            result += " ";
        }
    }
     cout<<result<<endl;  // Output the reversed sentence
    return 0;
}