#include<bits/stdc++.h>
using namespace std;
int main () {
    long long n;
    cin>>n;

    if ((n*(n+1)/2)%2 != 0) {
        cout << "NO" << endl;
    }
    else {
        vector<int> a,b;
        int sum1= n, sum2=0;
        a.emplace_back (n);
        for (int i=n-1; i>=1; i--) {
            if (sum1 < sum2) {
                sum1+= i;
                a.emplace_back (i);
            }
            else {
                sum2+= i;
                b.emplace_back (i);
            }
        }
        cout << "YES" << endl;
        
        cout << a.size() << endl;
        
        for (int i=0; i<a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;

        cout << b.size() << endl;
        for (int i=0; i<b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}