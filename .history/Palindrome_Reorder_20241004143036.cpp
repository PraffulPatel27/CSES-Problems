#include<bits/stdc++.h>
using namespace std;
int main () {
    string s = "AAAACACBA";
    // cin>>s;

    map<char,int> mp;
    for (auto it: s) 
       mp[it]++;

    vector<pair<char,int>> vp(mp.begin(), mp.end());
    // sort in descending order
    //   sort (vp.begin(), vp.end(), greater<pair<char,int>>());
    sort (vp.begin(), vp.end(), [](const pair<char,int>& a, const pair<char,int>& b) {
        return a.second > b.second;
        // Descending order based on frequency
    });

    int cnt= 0;
    string a,b;
    for (auto it: vp) {
        if (it.second == 1) 
           cnt++;
        
        for (int i=1; i<=it.second / 2; i++) {
            a.push_back (it.first);

            if (it.second != 1) {
                b.push_back (it.first);
            }
        }
    }

    if (cnt > 1) {
        
    }
}