#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
	string tmp = s;
	reverse(s.begin(), s.end());
	return s == tmp;
}

void testCase() {
	string s;
	cin>>s;
	int ans = 1;
	for(int i=0; i<s.length()-1; i++) {
		for(int j=1; j<=s.length()-i; j++) {
			string tmp = s.substr(i,j);
			int k = tmp.length();
			if(check(tmp)) {
				ans = max(ans, k);
			}
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
