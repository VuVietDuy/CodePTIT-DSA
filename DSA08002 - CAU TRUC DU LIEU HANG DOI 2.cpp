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
		string m; cin>>m;
		if(m=="PUSH"){
			int i; cin>>i;
			q.push(i);
		}
		if(m=="POP"){
			if(!q.empty()) q.pop();
		}
		if(m=="PRINTFRONT"){
			if(!q.empty()) cout<<q.front()<<endl;
			else cout<<"NONE"<<endl;
		}
	}
}

int main() {
	testCase();
}
