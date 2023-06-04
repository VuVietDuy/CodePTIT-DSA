#include<bits/stdc++.h>
using namespace std;

int n,c=0 ,a[100];
int cot[100]={1}, cheonguoc[100]={1}, cheoxuoi[100]={1};

void result(){
	for(int i=1; i<=n; i++){
		cout<<i<<" "<<a[i]<<endl;
	}
}

void Try(int i){
	for(int j=1; j<=n; j++){
		if(cot[j]==1 && cheonguoc[i-j+n]==1 && cheoxuoi[i+j-1]==1){
			cot[j]=0;
			cheonguoc[i-j+n]=0;
			cheoxuoi[i+j-1]=0;
			a[i]=j;
			if(i==n) {
				c++;
			}
			else {
				Try(i+1);
			}
			cot[j]=1;
			cheonguoc[i-j+n]=1;
			cheoxuoi[i+j-1]=1;
		}
	}
}

int main(){
	int t; cin>>t;
	for(int i=0; i<=100; i++){
		cot[i]=1;
		cheonguoc[i]=1;
		cheoxuoi[i]=1;
	}
	while(t--){
		cin>>n;
		Try(1);
		cout<<c<<endl;
		c=0;
	}
}
