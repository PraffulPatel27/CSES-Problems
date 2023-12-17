#include<bits/stdc++.h>
using namespace std;
#define fast_read_input_output() ios_base::sync_with_stdio(false); cin.tie(NULL);
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
    fast_read_input_output()
    vector<vector<int>> v= {{1,2,9,10,25}, {4,3,8,11,24}, {5,6,7,12,23}, {16,15,14,13,22}, {17,18,19,20,21}};
    
    int t;
    cin>>t;

    while (t--) {
        int x,y;
        cin>>x>>y;

        cout<< v[x-1][y-1] <<e;
    }
    
    return 0;
}