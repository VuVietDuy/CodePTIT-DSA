#include<bits/stdc++.h>
using namespace std;

//push
//pop
//top
//size
//empty

void testCase(){
	int x;
	string s;
	vector<int> v;
	while(cin>>s){
		if(s=="push"){
			cin>>x;
			v.push_back(x);
		}
		if(s=="pop"){
			if(!v.empty()){
				v.pop_back();
			}
		}
		if(s=="show"){
			if(!v.empty()){
				for(int k : v){
				cout<<k<<" ";
			}
			} else {
				cout<<"empty";
			}
			cout<<endl;
		}
	}
}

int main() {
	testCase();
}
