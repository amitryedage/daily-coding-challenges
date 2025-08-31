#include <bits/stdc++.h>
using namespace std;

vector<int> prime(int N) {
    vector<int> factors; // Create a vector to store prime factors
    while (N % 2 == 0) {
        factors.push_back(2);
        N /= 2;
    }
    for (int i = 3; i * i <= N; i += 2) {
        while (N % i == 0) {
            factors.push_back(i);
            N /= i;
        }
    }
    if (N > 1) {
        factors.push_back(N);
    }
    return factors;
}

int main() {
    int N = 18;
    vector<int> result = prime(N);

    cout << "Prime factors of " << N << " are;
    for (int f : result) cout << f << " ";
    cout << endl;

    return 0;
}
