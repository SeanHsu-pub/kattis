#include<bits/stdc++.h>
using namespace std;
int main(void){
	int k=0;
	char a0, a1, a2, a3;
	char b0, b1, b2, b3;
	cin >> a3 >> a2 >> a1 >> a0 >> b3 >> b2 >> b1 >> b0;
	if(a3!=b3){
		k++;
	}
	if(a2!=b2){
		k++;
	}
	if(a1!=b1){
		k++;
	}
	if(a0!=b0){
		k++;
	}
	cout << pow(2,k);
	return 0;
}
