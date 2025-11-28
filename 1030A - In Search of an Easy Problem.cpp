#include <bits/stdc++.h>
using namespace std;


int main() {
    int n , flag = 0;
    cin >> n;
    for(int i =0 ; i < n ; i++){
        int val;
        cin >>val;
        if(val == 1){
            flag = -1;
        }
    }
    if(flag == -1){
        cout << "HARD";
    }
    else{
        cout << "EASY";
    }
    return 0;
}

