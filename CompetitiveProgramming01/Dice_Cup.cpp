#include<bits/stdc++.h>
using namespace std;
int main(void){
	int a, b;
	cin >> a >> b;
	if(a<b){
		for(int i=a+1; i<=b+1; i++){
			cout << i << endl;
		}
	}else{
		for(int i=b+1; i<=a+1; i++){
			cout << i << endl;
		} 
	}
	return 0;
}
