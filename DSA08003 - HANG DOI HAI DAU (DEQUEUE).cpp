#include<bits/stdc++.h>
using namespace std;

void testCase() {
	deque<int> q;
	int n;
	cin>>n;
	while(n--){
		string m; cin>>m;
		if(m=="PUSHFRONT"){
			int i; cin>>i;
			q.push_front(i);
		}
		if(m=="PRINTFRONT"){
			if(!q.empty()) cout<<q.front()<<endl;
			else cout<<"NONE"<<endl;
		}
		if(m=="POPFRONT"){
			if(!q.empty()) q.pop_front();
		}
		if(m=="PUSHBACK"){
			int i; cin>>i;
			q.push_back(i);
		}
		if(m=="PRINTBACK"){
			if(!q.empty()) cout<<q.back()<<endl;
			else cout<<"NONE"<<endl;
		}
		if(m=="POPBACK"){
			if(!q.empty()) q.pop_back();
		}
	}
}

int main() {
	testCase();
}
