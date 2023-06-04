#include<bits/stdc++.h>
using namespace std;

char a[8] = {'A','B','C','D','E','F','G','H'},ans[1000];
int f[1000] = {0},n;

void result(){
	for(int i=0; i<n; i++){
		cout<<ans[i];
	}
	cout<<endl;
}

bool check(){
	for(int i=1; i<n-1; i++){
		if(ans[i]=='A'){
			if(ans[i-1]!='E' && ans[i+1]!='E'){
				return false;
			}
		}
		if(ans[i]=='E'){
			if(ans[i-1]!='A' && ans[i+1]!='A'){
				return false;
			}
		}
	}
	return true;
}

void Try(int i){
	for(int j=0; j<n; j++){
		if(f[j]==0){
			ans[i]=a[j];
			f[j]=1;
			if(i==n-1){
				if(check()) result();
			} else {
				Try(i+1);
			}
			f[j]=0;
		}
	}
}

int main(){
	char c;
	cin>>c;
	n=c-'A'+1;
	Try(0);
}
