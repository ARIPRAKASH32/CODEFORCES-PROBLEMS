#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,P1,P2,P3,T1,T2;
    cin>>n>>P1>>P2>>P3>>T1>>T2;

    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;

    long long ans=0;

    ans += (long long)(a[0].second - a[0].first) * P1;

    for(int i=1;i<n;i++){
        int gap = a[i].first - a[i-1].second;
        int t = gap;

        int use = min(t, T1);
        ans += 1LL * use * P1;
        t -= use;

        if(t > 0){
            use = min(t, T2);
            ans += 1LL * use * P2;
            t -= use;
        }

        if(t > 0){
            ans += 1LL * t * P3;
        }

        ans += 1LL * (a[i].second - a[i].first) * P1;
    }

    cout<<ans<<"\n";
    return 0;
}
