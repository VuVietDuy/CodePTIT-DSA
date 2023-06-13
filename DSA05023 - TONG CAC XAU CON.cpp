#include<bits/stdc++.h>
using namespace std;

long long convert(string s) {
	long long res=0;
	for(int i=0; i<s.length(); i++) {
		res = res*10 + (s[i] - '0');
	}
	return res;
}

void testCase() {
	string s;
	cin>>s;
	long long ans=0;
	for(int i=0; i<s.length(); i++) {
		for(int j=1; j<s.length()-i+1; j++) {
			string t = s.substr(i,j);
			long long a = convert(t);
			ans+=a;
		}
	}
	cout<<ans;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
