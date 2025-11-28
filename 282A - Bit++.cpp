#include<bits/stdc++.h>
using namespace std;

int main(){
    int op;
    cin >> op;
    int x =0;
    for(int i = 0 ; i < op ; i++){
        string s;
        cin >> s;
        if(s[0] == '+' || s[s.length()-1] == '+'){
            x++;
        }
        else
        x--;
    }
    
    cout << x;
    
    return 0;
}