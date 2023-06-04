#include<bits/stdc++.h>
using namespace std;

void testCase() {
	string n,m;
	cin>>n>>m;
	long long a=0,b=0;
	for(int i=0; i<n.length(); i++) {
		a=a*2 + (n[i]-'0');
	}
	for(int i=0; i<m.length(); i++) {
		b=b*2 + (m[i]-'0');
	}
	cout<<a*b<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
