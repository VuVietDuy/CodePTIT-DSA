#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin>>n;
	int a[n], l[n]={}, r[n]={};
	for(int i=1; i<=n; i++) cin>>a[i];
	for (int i = 1; i <= n; ++i) {
        if (a[i] > a[i - 1])
            l[i] = l[i - 1] + 1;
        else
            l[i] = 1;
    }
    for (int i = n; i >= 1; --i) {
        if (a[i] > a[i + 1])
            r[i] = r[i + 1] + 1;
        else
            r[i] = 1;
    }
    int maxx = 0;
    for (int i = 1; i <= n; ++i) {
        maxx = max(maxx, l[i] + r[i] - 1);
    }
    cout << maxx <<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
