#include<bits/stdc++.h>
using namespace std;

int n,b[1000]= {0},a[1000];

void solve() {
	for(int i=1; i<n; i++) {
		if(abs(a[i]-a[i+1])==1) {
			return;
		}
	}
	for(int i=1; i<=n; i++) {
		cout<<a[i];
	}
	cout<<endl;
}

void Try(int i) {
	for(int j=1; j<=n; j++) {
		if(b[j]==0) {
			a[i]=j;
			b[j]=1;
			if(i==n) solve();
			else Try(i+1);
			b[j]=0;
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n;
		Try(1);
		cout<<endl;
	}
}
