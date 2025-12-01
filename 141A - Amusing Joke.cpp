#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin >> a>>b>>c;
    
    string t=a+b;
    
    sort(t.begin(),t.end());
    sort(c.begin(),c.end());
    
    cout << (t==c ? "YES" : "NO");
     return 0;
    
    
}
