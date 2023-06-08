#include<bits/stdc++.h>
using namespace std;

char t,a[100];
int n;

void print(){
	for(int i=1; i<=n; i++){
		cout<<a[i];
	}
	cout<<endl;
}

void Try(int i){
	for(char j=a[i-1]; j<=t; j++){
		a[i]=j;
		if(i==n){
			print();
		} else {
			Try(i+1);
		}
	}
}

int main() {
	cin>>t>>n;
	a[0]='A';
	Try(1);
}