#include <iostream>
#include <vector>
using namespace std;
// use function to Duplicate Number in array
int findDuplicate(vector<int>& arr) {

    int slow = arr[0];
    int fast = arr[0];
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast); //Use do while llop for check cycle is present 
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main() {
    int n;
    cout << "Enter n (array will have n+1 elements, numbers in [1..n]): ";
    cin >> n;

    vector<int> arr(n + 1);
    cout << "Enter " << n + 1 << " numbers between 1 and " << n << ":\n";
    for (int i = 0; i < n + 1; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate number is: " << findDuplicate(arr) << endl;
    return 0;
}
