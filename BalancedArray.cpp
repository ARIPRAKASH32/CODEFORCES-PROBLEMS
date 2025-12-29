#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if ((n / 2) % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        int k = n / 2;

        vector<int> a;

        for (int i = 1; i <= k; i++) {
            a.push_back(2 * i);
        }

        for (int i = 1; i < k; i++) {
            a.push_back(2 * i - 1);
        }

        int sum_even = 0, sum_odd = 0;
        for (int i = 0; i < k; i++) sum_even += a[i];
        for (int i = k; i < n - 1; i++) sum_odd += a[i];

        int last_value = sum_even - sum_odd;
        a.push_back(last_value);

        for (int x : a) cout << x << " ";
        cout << "\n";
    }
    return 0;
}

