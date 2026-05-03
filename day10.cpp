#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (string s : strs) {
        string key = s;          
        sort(key.begin(), key.end());  // sort characters to form key
        mp[key].push_back(s);    // group by key
    }

    vector<vector<string>> result;
    for (auto &entry : mp) {
        result.push_back(entry.second); // collect grouped anagrams
    }

    return result;
}

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> groups = groupAnagrams(strs);

    // Print result
    for (auto &group : groups) {
        cout << "[ ";
        for (auto &word : group) cout << word << " ";
        cout << "]\n";
    }
}
