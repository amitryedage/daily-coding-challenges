#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    deque<int> dq; // stores indexes
    vector<int> result;

    for (int i = 0; i < arr.size(); i++) {
      // step 1: remove elements out of the current window
        if (!dq.empty() && dq.front() <= i - k) dq.pop_front();

        // step 2: remove smaller elements from the back
        while (!dq.empty() && arr[dq.back()] <= arr[i]) dq.pop_back();
        // step 3: add current element at the back of the deque
        dq.push_back(i);
        // step 4: record the maximum for the current window
        if (i >= k - 1) result.push_back(arr[dq.front()]);
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> ans = maxSlidingWindow(arr, k);
    for (int x : ans) cout << x << " ";
    return 0;
}
