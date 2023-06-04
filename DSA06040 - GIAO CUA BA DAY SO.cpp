#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n,m,k;
	cin>>n>>m>>k;
	vector<long long> a(n),b(m),c(k);
	for(auto &i : a) cin>>i;
	for(auto &i : b) cin>>i;
	for(auto &i : c) cin>>i;
	int i=0,j=0,z=0;

	vector<long long> ans;

	while(i<n && j<m && z<k) {
		if(a[i]==b[j] && a[i]==c[z]) {
			ans.push_back(a[i]);
			i++;
			j++;
			z++;
		} else if(a[i]<b[j]) i++;
		else if(b[j]<c[z]) j++;
		else z++;
	}

	if (ans.empty()) {
		cout<<-1;
	} else {
		for(auto x : ans) {
			cout<<x<<" ";
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
