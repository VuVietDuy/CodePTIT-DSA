#include<bits/stdc++.h>
using namespace std;

//FIFO queue
//O(1)
//push
//pop
//empty
//size
//front

void testCase() {
	queue<int> q;
	int n;
	cin>>n;
	while(n--){
		int m; cin>>m;
		if(m==1) cout<<q.size()<<endl;
		if(m==2) {
			string k = q.empty() ? "YES" : "NO";
			cout<<k<<endl;
		}
		if(m==3){
			int i; cin>>i;
			q.push(i);
		}
		if(m==4){
			if(!q.empty()) q.pop();
		}
		if(m==5){
			int k = q.empty() ? -1 : q.front();
			cout<<k<<endl;
		}
		if(m==6){
			int k = q.empty() ? -1 : q.back();
			cout<<k<<endl;
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
