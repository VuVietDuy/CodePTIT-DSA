#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> a(n);
		vector<int> b(n);
		queue<int> q;
		for(int i=0; i<n; i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b.begin(),b.end());
		for(int i=0; i<n; i++){
			if(a[i]!=b[i]) q.push(i);
		}
		cout<<q.front()+1<<" "<<q.back()+1<<endl;
	}
}
