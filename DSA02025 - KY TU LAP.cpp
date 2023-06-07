#include<bits/stdc++.h>
using namespace std;

int n;
string s[100];//mang luu string
int a[100][100];//mang luu so ki tu lap
int c[100];//mang luu cau hinh
int f[100]= {}; //mang danh dau
int res=1000000;

int count(string s1, string s2) {
	int count=0, l=s2.length();
	for(int i=0; i<s1.length(); i++) {
		int f = s2.find(s1[i]);
		if(0<=f && f<l) count++;
	}
	return count;
}

void check() {
	int sum=0;
	for(int i=1; i<n; i++) {
		sum+=a[c[i]][c[i+1]];
	}
	res = min(res,sum);
}

void Try(int i) {
	for(int j=1; j<=n; j++) {
		if(f[j]==0) {
			c[i]=j;
			f[j]=1;
			if(i==n) check();
			else {
				Try(i+1);
			}
			f[j]=0;
		}
	}
}

void testCase() {
	cin>>n;
	cin>>s[1];
	for(int i=2; i<=n; i++) {
		cin>>s[i];
	}
	for(int i=1; i<=n; i++) {
		for(int j=i+1; j<=n; j++) {
			a[i][j] = count(s[i],s[j]);
			a[j][i] = a[i][j];
		}
	}
	Try(1);
	cout<<res<<endl;
}

int main() {
	testCase();
}
