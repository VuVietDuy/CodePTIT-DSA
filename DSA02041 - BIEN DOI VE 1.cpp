#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin>>n;
	queue<pair<int,int>> q;
	q.push({n,0});
	while(true) {
		pair<int,int> p = q.front();
		q.pop();
		if(p.first == 1) {
			cout<<p.second<<endl;
			return;
		}
		if(p.first % 3 == 0) {
			q.push({p.first/3, p.second+1});
		}
		if(p.first % 2 == 0) {
			q.push({p.first/2, p.second+1});
		}
		q.push({p.first-1, p.second+1});
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
