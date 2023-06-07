#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100][100];
int f[100]= {};
vector<int> ans;
vector<vector<int>> res;
bool check() {
	int sum=0;
	for(int x=0; x<n; x++) {
		sum+=a[x][ans[x]];
	}
	return sum==k;
}

void Try(int i, int sum) {
	for(int j=0; j<n; j++) {
		if(f[j]==0) {
			f[j]=1;
			ans[i]=j;
			if(i==n-1) {
				if(check()) res.push_back(ans);
			} else
				Try(i+1,sum+a[i][j]);
			f[j]=0;
		}
	}
}

void testCase() {
	cin>>n>>k;
	ans.resize(n);
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin>>a[i][j];
		}
	}
	Try(0,0);
	cout<<res.size()<<endl;
	for(auto i : res) {
		for(int j=0; j<n; j++) {
			cout<<i[j]+1<<" ";
		}
		cout<<endl;
	}
}

int main() {
	testCase();
}
