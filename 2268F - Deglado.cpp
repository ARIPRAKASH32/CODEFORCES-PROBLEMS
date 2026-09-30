#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;

const int MXN = 202;

int n, n2, a[MXN][MXN];
vector<pii> ans;

inline void opr(int i, int j) {
    swap(a[i][j], a[i+1][j]);
    swap(a[i][j+1], a[i+1][j+1]);
    ans.push_back({i, j});
}

inline int wh(int x, int j) {
    for(int i=x; i<=n2; i++)
        if(a[i][j]==x)
            return i;
    assert(0);
    return -1;
}

inline void R(int x, int j) {
    for(int i=wh(x, j+1)-1; i>=x; i--) opr(i, j+1);
}

inline void RL(int x, int j) {
    int pos1 = wh(x, j+1), pos2 = wh(x, j+2);
    while(pos1>pos2) opr(--pos1, j);
    while(pos1<pos2) opr(--pos2, j+2);
    while(pos1>x) opr(--pos1, j+1);
}

inline void L(int x, int j) {
    for(int i=wh(x, j)-1; i>=x; i--) opr(i, j-1);
}

inline void L1(int x, int j) {
    if(a[x+1][j]==x) opr(x+1, j);
    opr(x, j-1);
    for(int i=wh(x, j)-1; i>=x+1; i--) opr(i, j);
    opr(x, j-1);
}

inline void solve0(int x, int j) {
    int pos1=wh(x, j), pos2=wh(x, j+1);
    while(pos1>pos2) opr(--pos1, j-1);
    while(pos1<pos2) opr(--pos2, j+1);
    while(pos1>x) opr(--pos1, j);
}

inline void lft(int x) {
    if(a[x][2]==x) {
        if(a[x][1]==x) return;
        if(a[x+1][1]==x) opr(x+1, 1);
        opr(x, 1);
    }
    else if(a[x][1]==x) {
        if(a[x+1][2]==x) opr(x+1, 1);
        opr(x, 1);
    }

    int pos1=wh(x, 1), pos2=wh(x, 2);
    if(pos1>pos2) {
        while(pos1>pos2) opr(--pos1, 1);
        pos2++;
    }
    while(pos1<pos2) opr(--pos2, 2);
    while(pos1>x) opr(--pos1, 1);
}

inline void rgt(int x) {
    if(a[x][n2-1]==x) {
        if(a[x][n2]==x) return;
        if(a[x+1][n2]==x) opr(x+1, n2-1);
        opr(x, n2-1);
    }
    else if(a[x][n2]==x) {
        if(a[x+1][n2-1]==x) opr(x+1, n2-1);
        opr(x, n2-1);
    }

    int pos1=wh(x, n2-1), pos2=wh(x, n2);
    if(pos1<pos2) {
        while(pos1<pos2) opr(--pos2, n2-1);
        pos1++;
    }
    while(pos1>pos2) opr(--pos1, n2-2);
    while(pos1>x) opr(--pos1, n2-1);
}

inline void lst() {
    for(int j=1; j<=n2-1; j++)
        if(a[n2][j]!=n2) opr(n2-1, j);
}

inline void print() {
    cout << ans.size() << '\n';
    for(auto [x, y] : ans) cout << x << ' ' << y << '\n';
    ans.clear();
}

void Main() {
    cin >> n;
    n2 = n<<1;
    for(int i=1; i<=n2; i++)
        for(int j=1; j<=n2; j++)
            cin >> a[i][j];
    int inv = 0;
    for(int j=1; j<=n2; j++)
        for(int i1=1; i1<=n2; i1++)
            for(int i2=i1+1; i2<=n2; i2++)
                inv ^= a[i1][j]>a[i2][j];
    if(inv) {
        cout << "-1\n";
        return;
    }
    if(n==1) {
        if(a[1][1]==2) cout << "1\n1 1\n";
        else cout << "0\n";
        return;
    }
    for(int x=1; x<=n2-2; x++) {
        for(int j=3; j<=n2-3; j+=2)
            if(a[x][j]==x && a[x][j+1]==x) opr(x, j);
        for(int j=3; j<=n2-3; j+=2)
            if(a[x][j]==x && a[x][j+1]!=x) {
                if(j==n2-3 || a[x][j+3]!=x) R(x, j);
                else RL(x, j);
            }
        for(int j=n2-3; j>=3; j-=2)
            if(a[x][j]!=x && a[x][j+1]==x) {
                if(a[x][j-2]==x && a[x][j-1]==x) L1(x, j);
                else L(x, j);
            }
        for(int j=3; j<=n2-3; j+=2)
            if(a[x][j]!=x)
                solve0(x, j);
        lft(x);
        rgt(x);
    }
    lst();
    print();
}

int32_t main() {
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    int tc;
    cin >> tc;
    while(tc--) Main();
    return 0;
}
