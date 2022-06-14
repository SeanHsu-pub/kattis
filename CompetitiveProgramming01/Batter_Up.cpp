#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n, a=0;
	double b=0.0;
	cin >> n;
	for(int i=0; i<n; i++){
		int t;
		cin >> t;
		if(t>=0){
			a++;
			b+=t;
		}
	}
	cout << fixed;
	cout.precision(20);
	cout << b/a;
	return 0;
}
