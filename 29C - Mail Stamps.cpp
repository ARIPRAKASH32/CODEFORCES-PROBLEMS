#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<long long, vector<long long>> adj;
    adj.reserve(2 * n);

    for (int i = 0; i < n; i++) {
        long long u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    long long start = -1;
    for (auto &p : adj) {
        if (p.second.size() == 1) {
            start = p.first;
            break;
        }
    }

    vector<long long> route;
    long long prev = -1, curr = start;

    while (true) {
        route.push_back(curr);
        long long next = -1;
        for (auto x : adj[curr]) {
            if (x != prev) {
                next = x;
                break;
            }
        }
        if (next == -1) break;
        prev = curr;
        curr = next;
    }

    for (auto x : route) cout << x << " ";
    cout << "\n";

    return 0;
}

