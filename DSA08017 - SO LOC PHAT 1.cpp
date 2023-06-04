#include<bits/stdc++.h>
using namespace std;


void testCase() {
	queue<string> q;
	stack<string> st;
	q.push("6");
	q.push("8");
	int t;
	cin>>t;
	string s;
	while(s.length()<=t) {
		s = q.front();
		q.pop();
		st.push(s);
		q.push(s+'6');
		q.push(s+'8');
	}
	st.pop();
	while(!st.empty()) {
		cout<<st.top()<<" ";
		st.pop();
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
