// https://codeforces.com/problemset/gymProblem/102267/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Edge case: smallest prime
    if (n < 4) { // no two primes sum to 2 or 3
        cout << -1 << "\n";
        return 0;
    }

    vector<bool> isPrime(n - 1, true);
    isPrime[0] = isPrime[1] = false;

    // Sieve of Eratosthenes
    for (int i = 2; i * i <= n-2; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n-2; j += i)
                isPrime[j] = false;
        }
    }

    // Find two primes that sum to n
    if(isPrime[2] && isPrime[n-2]) {
        cout << 2 << " " << n-2 << "\n";
        return 0;
    }

    cout << -1 << "\n";
    return 0;
}
