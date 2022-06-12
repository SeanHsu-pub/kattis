#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n=0;
	cin >> n;
	for(int i=0; i<n; i++){
		string a, b;
		cin >> a >> b;
		cout << a << endl << b << endl;
		for(int i=0; i<a.length(); i++){
			if(a[i]==b[i]){
				cout << ".";
			}else{
				cout << "*";
			}
		}
		cout << endl << endl;
	}
	return 0;
}
