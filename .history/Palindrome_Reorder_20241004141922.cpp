#include<bits/stdc++.h>
using namespace std;
int main () {
    string s = "AAAACACBA";
    // cin>>s;

    map<char,int> mp;
    for (auto it: s) 
       mp[it]++;
       
    vector<pair<char,int>> vp(mp.begin(), mp.end());
}