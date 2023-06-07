#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100];

void result() {
	int cnt=0;
	for(int i=0; i<=n; i++) {
		if(a[i]==1) cnt++;
	}
	if(cnt==k) {
		for(int i=1; i<=n; i++) {
			cout<<a[i];
		}
		cout<<endl;
	}
}

void Try(int i) {
	for(int j=0; j<=1; j++) {
		a[i]=j;
		if(i==n) {
			result();
		} else {
			Try(i+1);
		}
	}
}

void testCase() {
	cin>>n>>k;
	Try(1);
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
