#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(k + 2);
        for (int i = 1; i <= k; i++) cin >> a[i];
        
        vector<int> b(n + 1);
        for (int i = 1; i <= n; i++) cin >> b[i];
        
        vector<int> ops;
        
        for (int level = k; level >= 1; level--) {
            for (int i = 1; i <= n; i++) {
                if (b[i] == level) {
                    while (b[i] <= k) {
                        ops.push_back(i);
                        b[i]++;
                    }
                }
            }
        }
        
        cout << ops.size() << "\n";
        for (int x : ops) cout << x << " ";
        cout << "\n";
    }
    
    return 0;
}
