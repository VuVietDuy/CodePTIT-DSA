#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin>>n;
	vector<int> a(n), f(n);
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int i=0; i<n; i++) {
		f[i]=a[i];
		for(int j=0; j<i; j++) {
			if(a[i]>a[j])
				f[i] = max(f[i], f[j]+a[i]);
		}
	}
	int maxx = f[0];
	for(int i=1; i<n; i++) {
		maxx = max(maxx, f[i]);
	}
	cout<<maxx<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
