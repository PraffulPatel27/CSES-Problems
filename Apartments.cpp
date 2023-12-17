#include<bits/stdc++.h>
using namespace std;
#define fast_read_input_output() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define mod  1e9 + 7
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
    fast_read_input_output()
    
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> v1(n), v2(m);
    for (int i=0; i<n; i++) 
        cin>>v1[i];
    
    for (int i=0; i<m; i++)
        cin>>v2[i];

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int cnt=0,i=0,j=0;
    while (i<n && j<m) {
        if (abs(v1[i]-v2[j]) <= k) {
            cnt++;
            i++;
            j++;
        }
        else if (v1[i] < v2[j]) 
            i++;

        else 
            j++;
    }
    
    cout<< cnt << e;

    return 0;
}