#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string letters = "abcdefghijklmnopqrstuvwxyz";
    string ans = "";

    for (int i = 0; i < n; i++) {
        ans += letters[i % k];
    }

    cout << ans;
    return 0;
}
