#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int t;
	string s;
	cin>>t>>s;
	int l = s.length();
	vector<char> a(l);
	for(int i=0; i<l; i++){
		a[i+1]=s[i];
	}
	int i=l;
	while(i>0 && a[i]<=a[i-1]){
		i--;
	}
	i--;
	if(i==0) {
		cout<<t<<" BIGGEST";
		return;
	}
	for(int j=l; j>i; j--){
		if(a[j]>a[i]) {
			swap(a[i], a[j]);
			break;
		}
	}
	cout<<t<<" ";
	for(int j=1; j<=i; j++){
		cout<<a[j];
	}
	for(int j=l; j>i; j--){
		cout<<a[j];
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		testCase();
		cout<<endl;
	}
}
