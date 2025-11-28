#include<bits/stdc++.h>
using namespace std;
 
 
 
int main(){
    int t;
    cin >> t;
    
    for(int i =0 ; i < t ; i++){
        bool isodd = false;
        bool iseven = false;
        int n;
        cin >> n;
        int arr[n];
        for(int i =0 ; i < n ; i++){
            cin >> arr[i];
            if(arr[i]%2 == 0){
                iseven = true;
            }
            else if(arr[i]%2 != 0){
                isodd = true;
            }
        }
        if(isodd && iseven){
            sort(arr , arr+n);
        }
        for(auto num : arr){
            cout << num << " ";
        }
        cout << endl;
        
        
        
    }
    
    return 0;
}