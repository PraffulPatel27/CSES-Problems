#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n,q;
    cin>>n>>q;

    vector<long long> v(n);
    vector<long long> prefix_sum(n+1, 0);
    for (int i=0; i<n; i++) {
        cin>>v[i];
        prefix_sum[i+1] = prefix_sum[i] + v[i];
    }

    while (q--) {
        long long a,b;
        cin>>a>>b;

        cout << prefix_sum[b] - prefix_sum[a-1] << endl;
    }
} 