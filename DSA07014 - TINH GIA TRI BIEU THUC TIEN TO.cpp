#include<bits/stdc++.h>
using namespace std;

void testCase() {
	string s;
	cin>>s;
	stack<int> st;
	for(int i=s.size()-1; i>=0; i--) {
		if(s[i]>='0' && s[i]<='9') {
			st.push(s[i]-'0');
		} else {
			int fi = st.top();
			st.pop();
			int se = st.top();
			st.pop();
			int temp;
			if(s[i] == '*') temp = fi*se;
			else if(s[i] == '/') temp = fi/se;
			else if(s[i] == '+') temp = fi+se;
			else if(s[i] == '-') temp = fi-se;
			st.push(temp);
		}
	}
	cout<<st.top()<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
