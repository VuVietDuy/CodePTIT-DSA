#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin>>n;
	long a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a,a+n);
	int cnt=0,ans=0;
	long val=a[0];
	for(int i=0; i<n; i++) {
		if(a[i-1]<a[i]) {
			cnt=1;
		} else {
			cnt++;
		}
		if(cnt>ans) {
			ans=cnt;
			val=a[i];
		}
	}
	if(ans>n/2) cout<<val;
	else cout<<"NO";
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
