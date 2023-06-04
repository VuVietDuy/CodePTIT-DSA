#include<bits/stdc++.h>
using namespace std;

int n, a[100], x[100];
vector<string> res;

void Try(int i, int pos) {
	for(int j = pos; j <= n; j++) {
		if(a[j] > x[i-1]) {
			x[i] = a[j];
			if(i >= 2) {
				string s="";
				for(int k=1; k<=i; k++) {
					s+=to_string(x[k]);
					s+=" ";
				}
				res.push_back(s);
			}
		Try(i+1,j+1);
		}
	}
}

int main() {
	cin>>n;
	x[0]=-1;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	Try(1,1);
	sort(res.begin(), res.end());
	for(auto x : res) {
		cout<<x<<endl;
	}
}
