#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n, a, b, t;
	cin >> n >> a >> b;
	for(int i=0; i<n; i++){
		cin >> t;
		if(((a*a)+(b*b))>=(t*t)){
			cout << "DA" << endl;
		}else{
			cout << "NE" << endl;
		}
	}
	return 0;
}
