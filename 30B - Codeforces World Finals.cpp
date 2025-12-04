#include <bits/stdc++.h>
using namespace std;

bool is_leap(int y){ return y%4==0; }

int days_in_month(int m,int y){
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) return 31;
    if(m==4||m==6||m==9||m==11) return 30;
    if(m==2) return is_leap(y)?29:28;
    return 0;
}

bool valid_date(int d,int m,int y){
    if(m<1||m>12) return false;
    if(d<1) return false;
    return d<=days_in_month(m,y);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2;
    if(!(cin>>s1>>s2)) return 0;
    int Df,Mf,Yf;
    Df = stoi(s1.substr(0,2));
    Mf = stoi(s1.substr(3,2));
    Yf = stoi(s1.substr(6,2));
    int finals_year = 2000 + Yf;
    vector<int> nums(3);
    nums[0] = stoi(s2.substr(0,2));
    nums[1] = stoi(s2.substr(3,2));
    nums[2] = stoi(s2.substr(6,2));
    sort(nums.begin(), nums.end());
    bool ok=false;
    do{
        int bd = nums[0], bm = nums[1], by = nums[2];
        int birth_year = 2000 + by;
        if(!valid_date(bd,bm,birth_year)) continue;
        if(birth_year < 2000+1 || birth_year > 2000+99) continue;
        int ty = birth_year + 18;
        int tm = bm;
        int td = bd;
        if(tm==2 && td==29 && !is_leap(ty)) td = 28;
        if(!valid_date(td,tm,ty)) continue;
        if (make_tuple(ty,tm,td) <= make_tuple(finals_year, Mf, Df)) { ok=true; break; }
    } while(next_permutation(nums.begin(), nums.end()));
    cout << (ok? "YES":"NO") << "\n";
    return 0;
}
