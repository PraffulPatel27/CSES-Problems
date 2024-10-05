#include <bits/stdc++.h>
using namespace std;
int main()
{
    fast_read_input_output()
    long long n;
    cin>>n;

    vecl v(n);
    forf cin>>v[i];
    ll ans= INT_MIN;
    ll sum= 0;

    for (auto i=0; i<n; i++) {
        sum= max(v[i], sum + v[i]);
        ans= max(ans, sum);
    }

    cout << ans << endl;

    return 0;
}