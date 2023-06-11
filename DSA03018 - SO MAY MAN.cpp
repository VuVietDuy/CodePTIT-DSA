#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin>>n;
	int seven = n/7;
	int four = n%7;
	cout<<four<<" "<<seven;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
