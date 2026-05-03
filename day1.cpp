#include <bits/stdc++.h>
using namespace std;
//Here I am using binary approach to make it more optimal 
void sort(vector<int>& arr) {
    int low = 0;                  // Position for next 0
    int mid = 0;                  // Current element under consideration
    int high = arr.size() - 1;    // Position for next 2

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements (only 0, 1, or 2), separated by spaces:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
