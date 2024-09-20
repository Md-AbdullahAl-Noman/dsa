#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string& s) {
    vector<string> words;
    stringstream ss(s);
    string word;

    // Split the sentence into words
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse the words vector
    reverse(words.begin(), words.end());

    // Join the reversed words into a sentence
    string reversedSentence;
    for (size_t i = 0; i < words.size(); ++i) {
        reversedSentence += words[i];
        if (i != words.size() - 1) {
            reversedSentence += " ";
        }
    }

    return reversedSentence;
}

int main() {
    string s = "The Sky is blue";
    cout << reverseWords(s);
    return 0;
}
