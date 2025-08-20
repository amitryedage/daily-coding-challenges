#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> ZeroSumSubarrays(vector<int>& arr) {
    unordered_map<int, vector<int>> prefixMap; 
    vector<pair<int,int>> result;

    int prefix_sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        prefix_sum += arr[i];

        if (prefix_sum == 0) {
            result.push_back({0, i});
        }

    
        if (prefixMap.find(prefix_sum) != prefixMap.end()) {
            for (int startIdx : prefixMap[prefix_sum]) {
                result.push_back({startIdx + 1, i});
            }
        }

        prefixMap[prefix_sum].push_back(i);
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, -3, 3, -1, 2};

    auto ans = ZeroSumSubarrays(arr);

    if (ans.empty()) {
        cout << "No zero-sum subarrays found\n";
    } else {
        for (auto &p : ans) {
            cout << "(" << p.first << ", " << p.second << ")\n";
        }
    }
    return 0;
}
