#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n, in, de, co;
    cin >> n >> in >> de >> co;

    int f[101] = {}; f[1] = in;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 1)
            f[i] = min({f[i - 1] + in, f[(i - 1) / 2] + co + in, f[(i + 1) / 2] + co + de});
        else
            f[i] = min(f[i - 1] + in, f[i / 2] + co);
    }
    cout << f[n];
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
