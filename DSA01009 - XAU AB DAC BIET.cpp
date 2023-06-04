#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<char> a;
vector<string> ans;
string s;

void solve() {
	string s="";
	for(int i=1; i<=n; i++){
		s+=a[i];
	}
	string z(k,'A');
	int pos = s.find(z,0);
	if(pos!=-1){
		int pos2 = s.find(z,pos+1);
		if(pos2==-1) ans.push_back(s);
	}
}

void Try(int i) {
	for(char j='A'; j<='B'; j++) {
		a[i]=j;
		if(i==n) {
			solve();
		} else {
			Try(i+1);
		}
	}
}

void testCase() {
	cin>>n>>k;
	a.resize(n+1);
	Try(1);
	cout<<ans.size()<<endl;
	for(auto x : ans) cout<<x<<endl;
}

int main() {
	testCase();
}
