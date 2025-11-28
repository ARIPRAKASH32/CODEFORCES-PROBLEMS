#include<bits/stdc++.h>
using namespace std;

int main(){
	int upp = 0,low = 0;
	string s;
	cin >> s;
	
	for(char &c : s){
		if(islower(c)) low++;
		else upp++;
	}
	if(upp > low){
		for(char &ch : s){
			ch = toupper(ch);
		}
	}
	else{
		for(char &ch : s){
			ch = tolower(ch);
		}
	}

	cout << s;

	return 0;
}