#include<bits/stdc++.h>
using namespace std;

int n;
string s;

void solve() {
	if(s.front()=='H' && s.back()=='A' && s.find("HH")==-1) {
		cout<<s<<endl;
	}
}

void Try(int i) {
	for(int j=0; j<=1; j++) {
		if(j==0) s[i]='A';
		else s[i]='H';
		if(i==n-1) solve();
		else Try(i+1);
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n;
		s.resize(n);// chuoi s co do dai n
		Try(0);
	}
}