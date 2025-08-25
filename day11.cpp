#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> result;
    vector<bool> used;

    void backtrack(string &s, string &current) {
        if (current.size() == s.size()) {
            result.push_back(current);
            return;
        }
        for (int i = 0; i < s.size(); i++) {
            // skip already used
            if (used[i]) continue;

            // skip duplicates (important!)
            if (i > 0 && s[i] == s[i-1] && !used[i-1]) continue;

            // choose
            used[i] = true;
            current.push_back(s[i]);

            // explore
            backtrack(s, current);

            // unchoose
            current.pop_back();
            used[i] = false;
        }
    }

    vector<string> permuteUnique(string s) {
        sort(s.begin(), s.end());  // sort to handle duplicates
        used.assign(s.size(), false);
        string current = "";
        backtrack(s, current);
        return result;
    }
};

int main() {
    string s;
    cin >> s;

    Solution sol;
    vector<string> ans = sol.permuteUnique(s);

    for (auto &perm : ans) cout << perm << " ";
    cout << endl;
}
