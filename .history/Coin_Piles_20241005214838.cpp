#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while (t--) {
        long long a,b;
        cin>>a>>b;

        long long maxi = max(a,b)
        if (a%3 == 0 || b%3 == 0 || (a+b)%3 == 0) {
            cout<<"YES" << endl;
        }
        else {
            cout<<"NO" << endl;
        }
    }

    return 0;
}