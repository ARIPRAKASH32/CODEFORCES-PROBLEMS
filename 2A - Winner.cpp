#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<pair<string,int>> v(n);
    for(int i=0;i<n;i++) cin>>v[i].first>>v[i].second;

    map<string,int> total;
    for(auto &p:v) total[p.first]+=p.second;

    int mx=INT_MIN;
    for(auto &p:total) mx=max(mx,p.second);

    set<string> cand;
    for(auto &p:total) if(p.second==mx) cand.insert(p.first);

    map<string,int> cur;
    for(auto &p:v){
        cur[p.first]+=p.second;
        if(cand.count(p.first) && cur[p.first]>=mx){
            cout<<p.first<<"\n";
            break;
        }
    }

    return 0;
}
