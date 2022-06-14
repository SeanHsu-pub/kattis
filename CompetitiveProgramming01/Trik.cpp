#include<bits/stdc++.h>
using namespace std;
int main(void){
	char cc;
	int a=1, b=0, c=0;
	while(cin>>cc){
		if(cc=='A'){
			swap(a,b);
		}else if(cc=='B'){
			swap(b,c);
		}else{
			swap(a,c);
		}
	}
	if(a){
		cout << 1;
	}else if(b){
		cout << 2;
	}else{
		cout << 3;
	}
	return 0;
}
