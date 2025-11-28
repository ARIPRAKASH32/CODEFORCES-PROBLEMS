#include <bits/stdc++.h>
using namespace std;


int main() {
   int n;
   cin >> n;
   int arr[n];
   for(int i =0 ; i < n ; i++){
       cin >> arr[i];
   }
   int total =0;
   for(int i =0 ; i < n;i++){
       total ^= arr[i];
   }
   int pre  =0;
   int count =0;
  
   for(int i=0;i<n;i++){
       pre ^= arr[i];
       if(pre == total){#include <bits/stdc++.h>
using namespace std;


int main() {
   int n , count = 0;
   cin >> n;
   for(int i =0 ; i < n ;i++){
       int a , b;
       cin >> a >> b;
       int res= b-a;
       if(res >= 2) count++;
   }
   
   
   cout << count;
    return 0;
}



           count++;
           pre =0;
       }
       
   } 
   
   cout << count;
    return 0;
}



