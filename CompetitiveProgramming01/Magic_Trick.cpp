#include<bits/stdc++.h>
using namespace std;
int main(void){
	char t;
	bool w=true;
	int a[26]={};
	while(cin >> t){
		a[(int)t-97]++;
		if(a[(int)t-97] == 2){
			w=false;
			cout << 0;
			break;
		}
	}
	if(w){
		cout << 1;
	}
	return 0;
}
