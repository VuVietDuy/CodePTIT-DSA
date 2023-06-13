#include<bits/stdc++.h>
using namespace std;

int n,p,s;
vector<int> prime;
vector<vector<int>> res;

bool check(int x) {
	if(x%2==0) return false;
	for(int i=3; i<=sqrt(x); i+=2) {
		if(x%i==0) {
			return false;
		}
	}
	return true;
}

void seive() {
	prime.push_back(2);
	for(int i=3; i<=200; i+=2) {
		if(check(i)) prime.push_back(i);
	}
}

void Try(int i, int sum, vector<int> lst) {
	if(lst.size()==n) {
		if(sum==s)
			res.push_back(lst);
		return;
	}
	for(int j=i; j<prime.size(); j++) {
		if(sum+prime[j]<=s) {
			lst.push_back(prime[j]);
			Try(j+1, sum+prime[j], lst);
			lst.pop_back();
		}
	}
}

void testCase() {
	cin>>n>>p>>s;
	res.clear();
	vector<int> lst;
	int start;
	for(int i=0; i<prime.size(); i++){
		if(prime[i]>p) {
			start = i;
			break;
		}
	}
	Try(start,0,lst);
	cout<<res.size()<<endl;
	for(auto i : res) {
		for(auto j : i) {
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	seive();
	while(t--) {
		testCase();
	}
}
