#include<bits/stdc++.h>
using namespace std;

int a[1000][1000];//mang luu duong di
int f[1000][1000];//mang luu duong da di
int n;
vector<string> v;

void Try(int i, int j, string s){
	if(i==n && j==n){
		v.push_back(s);
	}
	if(i<n && a[i][j+1] && f[i][j+1]==0){
		f[i][j+1]=1;
		Try(i,j+1, s+'D');
	}
	if(i<n && a[i][j+1] && f[i][j+1]==0){
		f[i][j+1]=1;
		Try(i,j+1, s+'T');
	}
	if(i<n && a[i][j+1] && f[i][j+1]==0){
		f[i][j+1]=1;
		Try(i,j+1, s+'P');
	}
	if(i<n && a[i][j+1] && f[i][j+1]==0){
		f[i][j+1]=1;
		Try(i,j+1, s+'U');
	}
	f[i][j+1]=0;
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				cin>>a[i][j];
			}
		}
		string s="";
		Try(1,1,s);
		while(!v.empty()){
			cout<<v.front()<<" ";
			v.pop_back();
		}
		cout<<endl;
	}
}
