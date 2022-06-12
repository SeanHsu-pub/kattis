#include<bits/stdc++.h>
using namespace std;
int main(void){
	char c;
	int timesa=0, timesb=0;
	while(cin >> c){
		if(c=='|'){
			timesa++;
		}else{
			break;
		}
	}
	cin >> c;
	while(cin >> c){
		timesb++;
	}
	if(timesa!=timesb){
		cout << "fix";
	}else{
		cout << "correct";
	}
	return 0;
}
