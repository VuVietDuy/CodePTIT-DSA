#include<bits/stdc++.h>
using namespace std;

int a[100],n;
vector<char> v;
vector<vector<char>> res;

void Try(int i) {
	for(int j=i; j<=n; j++) {
		v.push_back(a[j]);
		res.push_back(v);
		if(i==n+1) return;
		else {
			Try(j+1);
		}
		v.pop_back();
	}
}

void testCase() {
	cin>>n;
	string s;
	cin>>s;
	res.clear();
	v.clear();
	for(int i=0; i<n; i++) {
		a[i+1] = s[i];
	}
	Try(1);
	for(auto i : res) {
		for(auto j : i) {
			cout<<j;
		}
		cout<<" ";
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
