#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n, a;	//還沒打好!! 
	float b=0.0;
	cin >> n;
	for(int i=0; i<n; i++){
		float t;
		cin >> t;
		if(t>=0){
			a++;
			b+=t;
		}
	}
	cout << fixed;
	cout.precision(16);
	cout << b/(float)a;
	return 0;
}
