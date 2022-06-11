#include<bits/stdc++.h>
using namespace std;
int main(void){
	char c[7]={};
	for(int i=0; i<7; i++){
		cin >> c[i];
	}
	bool a=true;
	if(c[0]=='5'){
		if(c[1]=='5'){
			if(c[2]=='5'){
				cout << 1;
				a=false;
			}
		}
	}
	if(a){
		cout << 0;
	}
	return 0;
}
