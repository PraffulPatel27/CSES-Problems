#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n,x;
    cin>>n>>x;

    vector<long long> v(n);
    for (auto i=0; i<n; i++) {
        cin>>v[i];
    }

    long long j=0, cnt= 0, sum= 0;
    for (auto i=0; i<n; i++) {
        sum+= v[i];

        while (j<n && sum>=x) {
            if (sum == x)  
              cnt++;
              
            sum-= v[j];
            j++;
        }
    }

    cout << cnt << endl;

}