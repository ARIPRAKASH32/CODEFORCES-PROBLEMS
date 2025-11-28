#include<bits/stdc++.h>
using namespace std;

int main(){

	int price,initial,wants , total = 0 ,borrow;
	cin >> price >> initial >> wants;
	 	
	for(int i = 1 ; i <= wants ; i++){
		total += i*price;
	}
	borrow = max(0,total - initial);
	cout << borrow;

	return 0;
}