#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
vector<vector<int>> res;

void Try(int n, int sum, vector<int> v) {
	if(sum==0) {
		res.push_back(v);
	}
	for(int i=n; i>=1; i--) {
		if(sum>=i) {
			v.push_back(i);
			Try(i,sum-i,v);
			v.pop_back();
		}
	}
}

void testCase() {
	cin>>n;
	v.clear();
	res.clear();
	Try(n,n,v);
	cout<<res.size()<<endl;
	for(auto i : res) {
		cout<<"("<<i[0];
		for(int j=1; j<i.size(); j++) {
			cout<<" "<<i[j];
		}
		cout<<") ";
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
		testCase();
}
