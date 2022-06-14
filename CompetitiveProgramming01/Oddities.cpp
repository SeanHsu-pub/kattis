#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int t;
		cin >> t;
		if(abs(t)%2){
			cout << t << " is odd" << endl;
		}else{
			cout << t << " is even" << endl;
		}
	}
	return 0;
}
