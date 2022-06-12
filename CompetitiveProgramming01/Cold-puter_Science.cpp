#include<bits/stdc++.h>
using namespace std;
int main(void){
	int t, a, n=0;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> a;
		if(a<0){
			n++;
		}
	}
	cout << n;
	return 0;
}
