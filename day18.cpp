#include <bits/stdc++.h>
using namespace std;

int countDivisors(int N) {
    int count = 0;
    for (int i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            if (i * i == N) count++;   
            else count += 2;           
        }
    }
    return count;
}

int main() {
    int N = 12;
    cout << "Number of divisors of " << N << " = " << countDivisors(N) << endl;
    return 0;
}
