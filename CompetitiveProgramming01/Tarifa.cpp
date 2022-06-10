#include<bits/stdc++.h>
using namespace std;
int main(void){
	int x, n, t, a=0;
	cin >> x >> n;
	for(int i=0; i<n; i++){
		cin >> t;
		a+=t;
	}
	cout << x*(n+1)-a;
	return 0;
}
