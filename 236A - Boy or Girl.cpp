#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    cin >> s1 ;
    int length = s1.length();
    unordered_set<char> set(s1.begin(), s1.end());
    int size1 = set.size();
    
    if(size1%2==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}
