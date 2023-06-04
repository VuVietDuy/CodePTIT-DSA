#include<bits/stdc++.h>
using namespace std;

bool  testCase() {
	int n;
	cin>>n;
	int a[100],b[100];
	for(int i=0; i<n; i++) {
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a, a+n);
	for(int i=0; i<=n/2; i++) {
		for(int j=0; j<n; j++) {
			if(b[i]==a[j]) {
				if(b[n-1-i]!=a[n-1-j]) return false;
			}
		}
	}
	return true;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		if(testCase()) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}
