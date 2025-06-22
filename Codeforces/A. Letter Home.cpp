#include<bits/stdc++.h>
using namespace std;
#define optimiz() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main()
{
    //optimiz();
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> a(n);


        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }


        int ans = 0;
        int t = min(abs(a[0] - s), abs(a[n-1] - s));
        ans = t + (a[n-1] - a[0]);
        cout << ans << endl;
    }

    return 0;
}
