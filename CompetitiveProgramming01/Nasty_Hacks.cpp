#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n, a, b, c;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a >> b >> c;
		if(b>(a+c)){
			cout << "advertise" << endl;
		}else if(b==(a+c)){
			cout << "does not matter" << endl;
		}else{
			cout << "do not advertise" << endl;
		}
	}
	return 0;
}
