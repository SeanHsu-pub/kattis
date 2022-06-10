#include<bits/stdc++.h>
using namespace std;
int main(void){
	double n, sum=0, a, b;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		sum+=(a*b); 
	}
	cout << sum;
	return 0;
}
