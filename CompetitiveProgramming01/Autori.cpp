#include<bits/stdc++.h>
using namespace std;
int main(void){
	char t;
	vector<char> c;
	cin >> t;
	c.push_back(t);
	while(cin>>t){
		if(t=='-'){
			cin >> t;
			c.push_back(t);
		}
	}
	for(vector<char>::iterator it=c.begin(); it!=c.end(); it++){
		cout << *it;
	}
	return 0;
}
