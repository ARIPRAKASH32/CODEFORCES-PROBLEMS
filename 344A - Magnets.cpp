#include <bits/stdc++.h>
using namespace std;


int main() {
   int n , count = 1;
   string prev,curr;
   cin >> n >> prev;
   
   for(int i =1 ;i < n ;i++){
       cin >> curr;
       if(prev != curr){
           count++;
       }
       prev = curr;
   }
   
   
   cout << count;
    return 0;
}
