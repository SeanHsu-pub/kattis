#include<bits/stdc++.h>
using namespace std;
int main(void){
	char c;
	int n=0;
	while(cin >> c){
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
			n++;
		}
	}
	cout << n;
	return 0;
}
