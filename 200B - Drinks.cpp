#include <bits/stdc++.h>
using namespace std;


int main() {
   
   double n;
   cin >> n;
   double res =0;
   for(int i=0;i<n;i++){
       double val;
       cin >> val;
       res += val;
   }
   double sol = res/n;
   cout << fixed << setprecision(12) << sol;
   
    return 0;
}


