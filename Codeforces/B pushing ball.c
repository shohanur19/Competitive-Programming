#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t, n, m;
    bool g, d;
    string s;
    cin >> t;  // Number of test cases

    while (t--) {
        g = 1;  // Validity flag
        cin >> n >> m;  // Grid dimensions

        vector<bool> c(m, false);  // Track columns with empty cells

        for (ll i = 0; i < n; i++) {
            cin >> s;
            d = 0;  // Flag for empty cell in current row

            for (ll j = 0; j < m; j++) {
                if (s[j] == '0') {
                    d = 1;
                    c[j] = 1;
                } else {
                    if (d && c[j]) {
                        g = 0;  // Invalid configuration detected
                    }
                }
            }
        }

        cout << (g ? "YES\n" : "NO\n");
    }

    return 0;
}
