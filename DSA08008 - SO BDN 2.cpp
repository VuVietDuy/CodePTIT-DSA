#include<bits/stdc++.h>
using namespace std;

int n;

bool check(string s, int n) {
	int x=0;
	for(int i=0; i<s.length(); i++) {
		x=(x*10+(s[i]-'0'))%n;
	}
	return x==0;
}

void testCase() {
	queue<string> q;
	q.push("1");
	while(true) {
		string s=q.front();
		q.pop();

		if(check(s,n)) {
			cout<<s<<endl;
			return;
		}

		q.push(s+'0');
		q.push(s+'1');
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n;
		testCase();
	}
}
