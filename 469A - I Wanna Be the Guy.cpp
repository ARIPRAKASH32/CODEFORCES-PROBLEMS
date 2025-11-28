#include<bits/stdc++.h>
using namespace std;

int main(){
	unordered_set<int> seen;
	int n,p,q;
	cin >> n >> p;	
	for(int i =0 ; i < p ; i++){
		int val	;
		cin >> val;
		seen.insert(val);
	}
	cin >> q;
	for(int i =0 ; i < q ; i++){
		int val;
		cin >> val;
		seen.insert(val);
	}
	if(seen.size() == n){

		cout << "I become the guy.";
	}
	else{
		cout << "oh, my keyboard!";
	}
	return 0;
}