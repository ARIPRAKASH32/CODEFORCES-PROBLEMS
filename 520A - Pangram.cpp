#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	string s;
	cin >> n >> s;
	unordered_set<char> seen;
	for(int i =0 ;i < n ;i ++){
		seen.insert(tolower(s[i]));
	}
	if(seen.size() == 26){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
			

	return 0;
}