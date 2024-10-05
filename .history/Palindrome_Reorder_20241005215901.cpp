#include<bits/stdc++.h>
using namespace std;
int main () {
    // string s = "AAAACACBA";
    string s;
    cin>>s;

    vector<int> frq(26, 0);
    int n = s.length();
    for (int i=0; i<n; i++) {
        frq[s[i] - 'A']++;
    }

    int cnt=0;
    for (int i=0; i<26; i++) {
        if (frq[i]%2 != 0) 
           cnt++;
    }

    if (cnt > 1) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        reverse (b.begin(), b.end());
        cout << a + b << endl;
    }
}