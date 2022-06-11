#include<bits/stdc++.h>
using namespace std;
int main(void){
	int l;
	double c, s;
	cin >> c >> l;
	for(int i=0; i<l; i++){
		double a, b;
		cin >> a >> b;
		s+=(c*a*b);
	}
	cout << fixed;
	cout.precision(6);
	cout << s;
	return 0;
}
