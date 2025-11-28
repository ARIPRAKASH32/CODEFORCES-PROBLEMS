#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, maxCount = 0 , total =0 , go , come;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> go >> come;
        total -= go;
        total += come;
        maxCount = max(maxCount , total);
    }
    cout << maxCount;
    return 0;
}
