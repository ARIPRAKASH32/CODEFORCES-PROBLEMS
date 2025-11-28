#include <bits/stdc++.h>
using namespace std;


int main() {
   
  unordered_set<int> seen ;
  for(int i =0 ; i < 4; i++){
      int val;
      cin >> val;
      seen.insert(val);
  }
  cout << 4 - seen.size();
  return 0;
}