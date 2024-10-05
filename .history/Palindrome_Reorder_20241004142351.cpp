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
        // 
    })
}