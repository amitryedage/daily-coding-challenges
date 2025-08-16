#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = n * (n + 1) / 2;  // expected sum of 1..n
    int x, actualSum = 0;

    cout << "Enter " << n - 1 << " numbers from 1 to " << n << ":\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        actualSum += x;
    }

    cout << "Missing number is: " << sum - actualSum << endl;
    return 0;
}
