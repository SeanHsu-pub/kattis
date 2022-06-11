#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int a;
		double b, c, d;
		cin >> a >> b;
		c=(60*a)/b;
		d=(60/b);
		cout << fixed;
		cout.precision(4);
		cout << c-d << " " << c << " " << c+d << endl;
	}
	return 0;
}
