#include<bits/stdc++.h>
using namespace std;
int main(void){
	char a[3]={};
	char b[3]={};
	int ia=0, ib=0;
	cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
	ia=((a[0])+(10*a[1])+(100*a[2]));
	ib=((b[0])+(10*b[1])+(100*b[2]));
	if(ia>ib){
		cout << a[2] << a[1] << a[0];
	}else{
		cout << b[2] << b[1] << b[0];
	}
	return 0;
}
