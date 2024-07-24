#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

long long power(long long x, long long y) {
    long long res = 1;
    x %= MOD;
    while (y > 0) {
        if (y & 1) {
            res = (res * x) % MOD;
        }
        y >>= 1;
        x = (x * x) % MOD;
    }
    return res;
}

int main() {
    int n; cin >> n;
    long long res = power(3, n);
    cout << res << endl;
}