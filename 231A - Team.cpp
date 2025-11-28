#include<bits/stdc++.h>
using namespace std;

int main(){
    int p;
    cin >> p;
    int count =0;
    int a,b,c;
    for(int i = 0 ; i < p ; i++){
        cin >> a >> b >> c;
        int sum = a+b+c;
        if(sum >= 2){
            count++;
        }
    }
    cout << count;
    
    return 0;
}