#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    stringstream ss(s); // read string like input
    string word;
    vector<string> words;

    // Extract words, skipping extra spaces
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse the order of words
    reverse(words.begin(), words.end());

    // Join back into single string
    string result;
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) result += " ";
    }

    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s); // input with spaces

    cout << "Reversed: " << reverseWords(s) << endl;
    return 0;
}
