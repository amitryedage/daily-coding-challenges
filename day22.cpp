#include <bits/stdc++.h>
using namespace std;

int firstElementKTimes(vector<int>& arr, int k) {
    unordered_map<int,int> freq; // use hashmap to store frequency of elements
    for (int x : arr) {
        freq[x]++;
        if (freq[x] == k) return x;  // return the first element that appears 2 times
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 7, 4, 3, 4, 8, 7};
    int k = 2; // Pick the first element that appears twice
    cout << "First element to appear " << k << " times: "
         << firstElementKTimes(arr, k) << endl;
    return 0;
}
