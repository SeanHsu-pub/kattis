#include<bits/stdc++.h>
using namespace std;
int main(void){
	int h, m, t;
	cin >> h >> m;
	h-=1;
	m+=15;
	if(h<0){
		h+=24;
	}
	if(m>=60){
		m-=60;
		h+=1;
	}
	cout << h << " " << m;
	return 0;
}
