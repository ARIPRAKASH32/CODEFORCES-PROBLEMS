#include <bits/stdc++.h>
using namespace std;

struct Interval {
    int l, r, id;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Interval> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].l >> a[i].r;
        a[i].id = i + 1;
    }

    sort(a.begin(), a.end(), [](auto &x, auto &y) {
        return x.l < y.l;
    });

    vector<pair<int,int>> inter;

    for (int i = 0; i + 1 < n; i++) {
        if (a[i].r > a[i+1].l) {
            inter.push_back({a[i].id, a[i+1].id});
        }
    }

    if (inter.empty()) {
        cout << n << "\n";
        for (int i = 1; i <= n; i++) cout << i << " ";
        cout << "\n";
        return 0;
    }

    vector<int> cand = {inter[0].first, inter[0].second};
    vector<int> ans;

    for (int c : cand) {
        bool ok = true;
        int last_r = -1;

        for (int i = 0; i < n; i++) {
            if (a[i].id == c) continue;
            if (last_r == -1) last_r = a[i].r;
            else {
                if (last_r > a[i].l) {
                    ok = false;
                    break;
                }
                last_r = a[i].r;
            }
        }

        if (ok) ans.push_back(c);
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (int x : ans) cout << x << " ";
    cout << "\n";

    return 0;
}
