#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	cin.ignore();
	vector<pair<int,int>> edge;
	for(int i=1; i<=n; i++) {
		string s,num;
		getline(cin,s);
		stringstream ss(s);
		while(ss >> num) {
			if(i<stoi(num)) {
				edge.push_back({i,stoi(num)});
			}
		}
	}
	for(auto it : edge) {
		cout<<it.first<<" "<<it.second<<endl;
	}
}
