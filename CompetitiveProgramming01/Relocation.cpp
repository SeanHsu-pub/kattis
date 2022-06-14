#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n, q;
	cin >> n >> q;
	const int cn=n;
	int a[cn]={};
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<q; i++){
		int i1, i2, i3;
		cin >> i1 >> i2 >> i3;
		if(i1==1){
			a[i2-1]=i3;
		}else{
			cout << abs(a[i2-1]-a[i3-1]) << endl;
		}
	}
	return 0;
}
