#include<bits/stdc++.h>
using namespace std;
int main(void){
	int a[5]={};
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			int t;
			cin >> t;
			a[i]+=t;
		}
	}
	int max=0, maxi;
	for(int i=0; i<5; i++){
		if(a[i]>max){
			maxi=i;
			max=a[maxi];
		}
	}
	cout << maxi+1 << " " << a[maxi];
	return 0;
}
