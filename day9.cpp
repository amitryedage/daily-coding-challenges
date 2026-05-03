#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0];

    // Compare prefix with every other word
    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        // Compare characters until mismatch or end
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            j++;
        }
        // Cut prefix to matched length
        prefix = prefix.substr(0, j);

        // If prefix becomes empty, no need to continue
        if (prefix.empty()) return "";
    }

    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};

    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}
