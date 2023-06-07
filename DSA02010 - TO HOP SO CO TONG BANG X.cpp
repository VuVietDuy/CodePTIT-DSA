#include<bits/stdc++.h>
using namespace std;

int x,n;
int a[100];
vector<int> v;
bool ok;

void Try(int i, int sum) {
	if(sum==x) {
		ok=true;
		cout<<"["<<v[0];
		for(int j=1; j<v.size(); j++) {
			cout<<" "<<v[j];
		}
		cout<<"]";
	}
	for(int j=0; j<=n; j++) {
		if(a[j]>=i && sum+a[j]<=x) {
			v.push_back(a[j]);
			Try(a[j],sum+a[j]);
			v.pop_back();
		}
	}
}

void testCase() {
	cin>>n>>x;
	v.clear();
	ok = false;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1, a+n+1);
	Try(1,0);
	if(!ok) {
		cout<<-1;
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
