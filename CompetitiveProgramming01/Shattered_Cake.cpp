#include<bits/stdc++.h>
using namespace std;
int main(void){
	int w, n, wi, li, t=0;
	cin >> w >> n;
	for(int i=0; i<n; i++){
		cin >> wi >> li;
//		for(int i=1;;i++){
//			if(((i%wi == 0)&&(w%li == 0))||((w%wi == 0)&&(i%li == 0))){
//				if(i>=maxa){
//					maxa=i;
//				}
//				break;
//			}
//		}
		t+=(wi*li);
	}
	cout << t/w;
	return 0;
}
