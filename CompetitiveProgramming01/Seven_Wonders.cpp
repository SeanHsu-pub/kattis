#include<bits/stdc++.h>
using namespace std;
int main(void){
	int t=0, c=0, g=0, min=999999;
	char a;
	while(cin >> a){
		if(a=='T'){
			t++;
		}else if(a=='C'){
			c++;
		}else{
			g++;
		}
	}
	if(min>t){
		min=t;
	}
	if(min>c){
		min=c;
	}
	if(min>g){
		min=g;
	}
	int total=0;
	total=(t*t)+(g*g)+(c*c)+(7*min);
	cout << total;
	return 0;
}
