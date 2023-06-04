#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		long long n,val,x,y,ans=0; cin>>n;
		priority_queue<long long, vector<long long>,greater<int>> q;
		for(int i=0; i<n; i++){
			cin>>val;
			q.push(val);
		}
		n--;
		while(n--){
			x=q.top(); q.pop();
			y=q.top(); q.pop();
			q.push(x+y);
			ans+=x+y;
		}
		cout<<ans<<endl;
	}
}
