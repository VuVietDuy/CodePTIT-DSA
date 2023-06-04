#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int &i : a) cin>>i;
	sort(a.begin(), a.end());
	int ans=n, l=n/2-1, r=n-1;
	while(l>=0) {
		if(a[l]<=a[r]/2) {
			ans--;
			l--;
			r--;
		} else {
			l--;
		}
	}
	cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
