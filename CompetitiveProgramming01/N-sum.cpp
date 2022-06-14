#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n, t, s=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> t;
		s+=t;
	}
	cout << s;
	return 0;
} 
