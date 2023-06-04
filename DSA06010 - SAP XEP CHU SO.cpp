#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		int a; cin>>a;
		cin.ignore();
		getline(cin, s);
		set<char> c;
		int l=s.length();
		for(int i=0; i<l; i++) {
			if(s[i]!=' ') c.insert(s[i]);
		}
		for(char x : c) {
			cout<<x<<" ";
		}
		cout<<endl;
	}
}