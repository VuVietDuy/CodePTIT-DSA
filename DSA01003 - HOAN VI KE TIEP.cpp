#include<bits/stdc++.h>
using namespace std;

int n,a[1005];

void testCase() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	int i=n;
	while(i>1 && a[i]<a[i-1]) {
		i--;
	}
	if(i==1) {
		for(int i=1; i<=n; i++) {
			cout<<i<<" ";
		}
	} else {
		swap(a[i-1],a[n]);
		sort(a+i,a+n+1);
		for(int i=1; i<=n; i++) {
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
