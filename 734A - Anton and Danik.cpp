#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x = 0, y = 0;
    string s;

    cin >> n >> s;

    for (char ch : s) {
        if (ch == 'A') x++;
        else y++;
    }

    if (x > y) cout << "Anton";
    else if (x < y) cout << "Danik";
    else cout << "Friendship";

    return 0;
}
