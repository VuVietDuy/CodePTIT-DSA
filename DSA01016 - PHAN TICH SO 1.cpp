#include<bits/stdc++.h>
using namespace std;

void Try(int n, int remain, vector<int> a) {
	if(remain==0) {
		cout<<"(";
		for(int i=0; i<a.size()-1; i++) cout<<a[i]<<" ";
		cout<<a.back()<<") ";
	}
	for(int i=n; i>=1; i--) {
		if(remain>=i) {
			a.push_back(i);
			Try(i, remain-i, a);
			a.pop_back();
		}
	}
}

void testCase() {
	int n;
	cin>>n;
	Try(n,n, {});
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
