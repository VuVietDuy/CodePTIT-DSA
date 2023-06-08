#include<bits/stdc++.h>
using namespace std;

long long doiChuSoNho(long long a){
	long long b=a;
	long long cnt = 0;
	while(b>0){
		int k=b%10;
		if(k==6){
			a-=pow(10,cnt);
		}
		b/=10;
		cnt++;
	}
	return a;
}

long long doiChuSoLon(long long a){
	long long b=a;
	int cnt = 0;
	while(b>0){
		int k=b%10;
		if(k==5){
			a+=pow(10,cnt);
		}
		b/=10;
		cnt++;
	}
	return a;
}

int main(){
	long long n,m;
	cin>>n>>m;
	long long min1 = doiChuSoNho(n);
	long long min2 = doiChuSoNho(m);
	long long max1 = doiChuSoLon(n);
	long long max2 = doiChuSoLon(m);
	cout<<min1+min2<<" "<<max1+max2;
}