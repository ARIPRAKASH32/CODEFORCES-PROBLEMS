#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) 
        cin >> grid[i];

    int min_r = n, max_r = -1;
    int min_c = m, max_c = -1;

    // Find bounding box of '*'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                min_r = min(min_r, i);
                max_r = max(max_r, i);
                min_c = min(min_c, j);
                max_c = max(max_c, j);
            }
        }
    }

    // Output minimal rectangle
    for (int i = min_r; i <= max_r; i++) {
        for (int j = min_c; j <= max_c; j++) {
            cout << grid[i][j];
        }
        cout << '\n';
    }

    return 0;
}
