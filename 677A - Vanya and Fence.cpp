#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , h , count =0 , mh;
    cin >> n >> mh;
    for(int i = 0 ; i< n ; i++){
        cin >> h;
        if(h > mh)count +=2;
        else count++;
    }
    cout << count;

    return 0;
}
