#include <bits/stdc++.h>
using namespace std;
long long step(long long x) {
    long long s = 0;
    while (x > 0) {
        int d = x % 10;
        s += d * d;
        x /= 10;
    }
    return s;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<long long, long long> cnt;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            for (int k = 0; k < 200; k++) x = step(x);
            cnt[x]++;
        }
        long long ans = 0;
        for (auto &p : cnt) ans += p.second * (p.second - 1) / 2;
        cout << ans << "\n";
    }
    return 0;
}
