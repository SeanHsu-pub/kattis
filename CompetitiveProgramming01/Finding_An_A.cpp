#include<bits/stdc++.h>
using namespace std;
int main(void){
	char c;
	
	int b=0;
	while(cin >> c){
		if(c=='a'){
			b++;
		}
		if(b){
			cout << c;
		}
	}
	return 0;
}
