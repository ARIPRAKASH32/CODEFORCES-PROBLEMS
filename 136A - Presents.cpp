#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n+1), ans(n+1);

    for(int i = 1; i <= n; i++) {
        cin >> p[i];
        ans[p[i]] = i;   // child p[i] receives gift from i
    }

    for(int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
}
