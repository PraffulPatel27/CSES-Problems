#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;

    while (t--) {
        ll a,b;
        cin>>a>>b;

        int ans = 1;
        while (b > 0) {
            if (b%2 == 1) {
                ans = (ans * a) % mod;
            }

            // b = b / 2;
            b = b >> 1;

            // change a to a^2
            a = (a * a) % mod;
        }

        cout << ans % mod << endl;
    }

    return 0;
}