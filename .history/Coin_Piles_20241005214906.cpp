#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while (t--) {
        long long a,b;
        cin>>a>>b;

        long long maxi = max(a,b);
        long long mini = min(a,b);
        if ((a+b)%3 == 0 && maxi <) {
            cout<<"YES" << endl;
        }
        else {
            cout<<"NO" << endl;
        }
    }

    return 0;
}