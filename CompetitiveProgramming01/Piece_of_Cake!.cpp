#include<bits/stdc++.h>
using namespace std;
int main(void){
	int a, b, c;
	cin >> a >> b >> c;
	if(2*b < a){
		int t=0;
		t=a-b;
		b=t;
	}
	if(2*c < a){
		int t=0;
		t=a-c;
		c=t;
	}
	cout << 4*b*c;
	return 0;
}
