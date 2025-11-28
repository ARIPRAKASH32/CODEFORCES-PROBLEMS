#include<bits/stdc++.h>
using namespace std;

int main(){
        
	int t;
	cin >> t;
	
	for(int i =0 ; i < n ; i++){
		int n;
		string s1,s2;
		cin >> n >> s1 >> s2;
		
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());

		if(s1 == s2){
			cout << "YES";
		}	
		else{
			cout << "NO";
		}

	}     	

        return 0;
}