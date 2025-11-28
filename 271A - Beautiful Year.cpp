#include <bits/stdc++.h>
using namespace std;
bool isdist(int num);
int main() {
    int year;
    cin >> year;
    year++;
    while(true){
        if(isdist(year)){
          break;  
        }
        year++;
    }
    cout << year;
    return 0;
}

bool isdist(int num){
    unordered_set<int> seen;
    while(num != 0){
        int rem = num%10;
        if(seen.count(rem)){
            return false;
        }
        seen.insert(rem);
        num/=10;
    }
    return true;
}
