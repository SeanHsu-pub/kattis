#include<bits/stdc++.h>
using namespace std;
int main(void){
	int x[3]={};
	int y[3]={};
	cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];
	if((x[0]!=x[1])&&(y[0]!=y[1])){
		cout << x[0]+x[1]-x[2] << " " << y[0]+y[1]-y[2];
	}
	if((x[2]!=x[1])&&(y[2]!=y[1])){ 
		cout << x[2]+x[1]-x[0] << " " << y[2]+y[1]-y[0];
	}
	if((x[0]!=x[2])&&(y[0]!=y[2])){
		cout << x[0]+x[2]-x[1] << " " << y[0]+y[2]-y[1];
	}
	return 0;
}
