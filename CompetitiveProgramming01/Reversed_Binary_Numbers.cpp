#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n, r=0;
	cin >> n;
	while(n){
		r+=(n%2);
		r*=2;
		n/=2;
	}
	r/=2;
	cout << r;
	return 0;
}
