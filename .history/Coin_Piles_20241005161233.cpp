#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    vector<long long> v(n);
    for (int i=0; i<n; i++) 
       cin>>v[i];

    long long ans= INT_MIN;
    long long sum= 0;

    for (auto i=0; i<n; i++) {
        sum= max(v[i], sum + v[i]);
        ans= max(ans, sum);
    }

    cout << ans << endl;

    return 0;
}