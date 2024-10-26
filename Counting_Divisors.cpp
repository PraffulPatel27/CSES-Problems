#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;

    ll factor = 1e6 + 1;
        vector<ll> cnt_factor(factor, 0);

        for (ll i=1; i<factor; i++) {
            for (ll j=i; j<factor; j+=i) {
                cnt_factor[j]++;
            }
        }

    while (t--) {
        ll x;
        cin>>x;
        cout << cnt_factor[x] << endl;
    }

    return 0;
}