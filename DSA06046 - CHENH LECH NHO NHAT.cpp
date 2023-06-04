#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin>>n;
	long long a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	sort(a,a+n);
	long long m=a[1]-a[0];
	for(int i=2; i<n; i++) {
		m=min(m,a[i]-a[i-1]);
	}
	cout<<m<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
		testCase();
}
