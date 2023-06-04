#include<bits/stdc++.h>
using namespace std;

void testCase() {
	string s;
	cin>>s;
	stack<string> st;

	for(int i=s.size()-1; i>=0; i--) {
		if(s[i]>='A' && s[i]<='Z') {
			st.push(string(1,s[i]));
		}
		if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='%' || s[i]=='^') {
			string fi = st.top(); st.pop();
			string se = st.top(); st.pop();
			string temp = '(' + fi + s[i] + se + ')';
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
