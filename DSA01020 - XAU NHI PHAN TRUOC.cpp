#include<bits/stdc++.h>
using namespace std;

void sinh(string a) {
	int l=a.length()-1;
	int n=l;
	while(a[l]=='0' && l>=0) {
		l--;
	}
	if(l>=0) {
		for(int i=0; i<=n; i++) {
			if(i==l) {
				cout<<0;
			}
			if(i<l) {
				cout<<a[i];
			}
			if(i>l) {
				cout<<1;
			}
		}
	} else {
		for(int i=0; i<=n; i++) {
			cout<<1;
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		string a;
		cin>>a;
		cin.ignore();
		sinh(a);
		cout<<endl;
	}
}