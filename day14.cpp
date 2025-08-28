#include <bits/stdc++.h>
using namespace std;

int count(string s, int k) {
    int n = s.size();
    int left = 0, result = 0;
    unordered_map<char, int> freq;

    for (int right = 0; right < n; right++) {
        freq[s[right]]++;

        while ((int)freq.size() > k) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) freq.erase(s[left]);
            left++;
        }

        result += (right - left + 1);  
    }
    return result;
}

int countExactlyK(string s, int k) {
    return count(s, k) - count(s, k - 1);
}

int main() {
    string s = "pqpqs";
    int k = 2;
    cout << "Count of substrings with exactly " << k << " distinct characters: "
         << countExactlyK(s, k) << endl;
    return 0;
}
