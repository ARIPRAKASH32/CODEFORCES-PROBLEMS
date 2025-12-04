#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    vector<bool> used(3005, false);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        used[x] = true;
    }

    for(int i = 1; i <= 3001; i++) {
        if(!used[i]) {
            cout << i;
            break;
        }
    }

    return 0;
}
