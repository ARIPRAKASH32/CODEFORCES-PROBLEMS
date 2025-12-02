#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n+1), P(n+1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            P[i] = P[i-1] + a[i];
        }
        long long best_l = LLONG_MIN;
        long long bestDelta = 0;
        for (int r = 1; r <= n; r++) {
            long long val_l = P[r-1] - 1LL * r * (r - 1);
            best_l = max(best_l, val_l);

            long long delta = -P[r] + 1LL * r * (r + 1) + best_l;
            bestDelta = max(bestDelta, delta);
        }

        long long originalSum = P[n];
        cout << originalSum + bestDelta << "\n";
    }

    return 0;
}

