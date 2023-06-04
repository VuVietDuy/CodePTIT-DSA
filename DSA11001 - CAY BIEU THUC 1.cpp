#include<bits/stdc++.h>
using namespace std;

void testCase() {
	string s;
	cin>>s;
	stack<string> st;
	for(char x : s) {
		string z="";
		if(x>='a' && x<='z') {
			z+=x;
		} else {
			string fi = st.top();
			st.pop();
			string se = st.top();
			st.pop();
			z = se + x + fi;
		}
		st.push(z);
	}
	cout<<st.top()<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
		testCase();
}
