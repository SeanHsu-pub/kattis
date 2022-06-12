#include<bits/stdc++.h>
using namespace std;
int main(void){
	int t, u, sum=0, s;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> u;
		for(int j=0; j<u; j++){
			cin >> s;
			sum+=s;
		}
		sum-=u;
		sum++;
		cout << sum << endl;
		sum=0;
	}
	return 0;
}
