#include<bits/stdc++.h>
using namespace std;
int main(void){
	char c, lc;
	while(cin >> c){
		if(c!=lc){
			cout << c;
		}
		lc=c;
	}
	return 0;
}
