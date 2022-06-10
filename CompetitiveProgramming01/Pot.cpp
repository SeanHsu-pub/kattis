#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n, t, e, sum=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> t;
		e=t%10;
		t/=10;
		int ts=1;
		for(int j=0; j<e; j++){
			ts*=t;
		}
		sum+=ts;
	}
	cout << sum;
	return 0;
}
