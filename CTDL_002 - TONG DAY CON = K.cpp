#include<bits/stdc++.h>
using namespace std;

int n,k,m,a[100],b[100],cnt=0;

void solve() {
	int sum=0;
	for(int i=1; i<=n; i++) {
		if(b[i]==1) {
			sum+=a[i];
		}
	}
	if(sum==k) {
		cnt=cnt+1;
		for(int i=1; i<=n; i++) {
			if(b[i]==1) {
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}

void Try(int i) {
	for(int j=0; j<=1; j++) {
		b[i]=j;
		if(i==n) {
			solve();
		} else {
			Try(i+1);
		}
	}
}

int main() {
	cin>>n>>k;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	Try(1);
	cout<<cnt;
}
