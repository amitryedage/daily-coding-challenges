#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    if (n == 0) return "";

    int start = 0, maxLen = 1;

    auto expand = [&](int left, int right) {
        while (left >= 0 && right < n && s[left] == s[right]) {
            int len = right - left + 1;
            if (len > maxLen) {
                maxLen = len;
                start = left;
            }
            left--;
            right++;
        }
    };

    for (int i = 0; i < n; i++) {
        expand(i, i);     // odd length palindrome (center at i)
        expand(i, i + 1); // even length palindrome (center between i, i+1)
    }

    return s.substr(start, maxLen);
}

int main() {
    string s;
    cin >> s;
    cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
}
