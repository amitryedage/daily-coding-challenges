#include <bits/stdc++.h>
using namespace std;

vector<int> findLeaders(vector<int>& arr, int n) {
    vector<int> leaders;
    int maxRight = arr[n - 1];   // last element is always a leader
    leaders.push_back(maxRight);

    // Traverse from second last to first
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];  // update maxRight
        }
    }

    reverse(leaders.begin(), leaders.end()); // reverse to maintain order
    return leaders;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> leaders = findLeaders(arr, n);

    cout << "Leaders in array: ";
    for (int x : leaders) cout << x << " ";
    cout << endl;

    return 0;
}
