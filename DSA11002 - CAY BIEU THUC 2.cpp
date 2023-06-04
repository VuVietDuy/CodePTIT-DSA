#include <bits/stdc++.h>
using namespace std;

int Calculate(int x, int y, char c) {
    if (c == '+') return x + y;
    if (c == '-') return x - y;
    if (c == '*') return x * y;
    if (c == '/') return x / y;
}

void TestCase() {
    int n; cin >> n; cin.ignore();
    string s; getline(cin, s);
    queue<int> q;
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == ' ') continue;
        if (isdigit(s[i])) {
            string tmp = "";
            while (isdigit(s[i])) {
                tmp = s[i--] + tmp;
            }
            i++;
            q.push(stoi(tmp));
        } else {
            int y = q.front(); q.pop();
            int x = q.front(); q.pop();
            q.push(Calculate(x, y, s[i]));
        }
    }
    cout << q.front();
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}