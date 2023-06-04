#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string s; getline(cin, s);
    stack<char> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != ')')
            st.push(s[i]);
        else {
            bool ok = false;
            while (!st.empty()) {
                char c = st.top(); st.pop();
                if (c == '+' || c == '-' || c == '*' || c == '/')
                    ok = true;
                if (c == '(')
                    break;
            }
            if (!ok) {
                cout << "Yes";
                return;
            }
        }
    }
    cout << "No";
}

int main() {

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}