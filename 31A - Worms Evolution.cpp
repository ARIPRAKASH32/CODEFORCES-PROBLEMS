#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);

    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int j = 1; j <= n; j++) {
        for (int k = 1; k <= n; k++) {
            if (j == k) continue;

            int sum = a[j] + a[k];

            for (int i = 1; i <= n; i++) {
                if (i == j || i == k) continue;
                if (a[i] == sum) {
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
            }
        }
    }

    cout << -1 << endl;
    return 0;
}

