#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin>>n;
	long long a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int i=0; i<n; i++) {
		long long ans =-1;
		for(int j=i+1; j<n; j++) {
			if(a[i]<a[j]) {
				ans=a[j];
				break;
			}
		}
		cout<<ans<<" ";
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
