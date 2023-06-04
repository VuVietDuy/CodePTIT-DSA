#include<bits/stdc++.h>
using namespace std;

//push
//pop
//top
//size
//empty

void testCase(int t) {
	int x;
	string s;
	vector<int> v;
	while(t--) {
		cin>>s;
		if(s=="PUSH") {
			cin>>x;
			v.push_back(x);
		}
		if(s=="POP") {
			if(!v.empty()) {
				v.pop_back();
			}
		}
		if(s=="PRINT") {
			if(!v.empty()) {
				cout<<v.back();
			} else {
				cout<<"NONE";
			}
			cout<<endl;
		}
	}
}

int main() {
	int t;
	cin>>t;
	testCase(t);
}	
