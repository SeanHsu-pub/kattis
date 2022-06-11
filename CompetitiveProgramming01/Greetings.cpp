#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n=-1;
	char c;
	cin >> c;
	while(cin >> c){
		n++;
		if(c=='y'){
			break;
		}
	}
	cout << 'h';
	for(int i=0; i<(2*n); i++){
		cout << 'e';
	}
	cout << 'y';
	return 0;
}
