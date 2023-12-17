#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>
#define vecl vector<long long>
#define e "\n"
#define en endl
#define pb push_back
#define ep emplace_back
#define ist insert
#define mp make_pair
#define forf for (auto i=0; i<n; i++)
#define fore for (auto ch: s)
int main()
{
    int n;
    cin>>n;

    vec v(n);
    for (int i=0; i<n; i++) 
      cin>>v[i];

    long long ans=0;
    for (int i=1; i<n; i++) {
        if (v[i] < v[i-1]) {
            ans+= v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }

    cout<<ans<<en;
    return 0;
}