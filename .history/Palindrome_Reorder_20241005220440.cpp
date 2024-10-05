#include<bits/stdc++.h>
using namespace std;
int main () {
    // string s = "AAAACACBA";
    // string s;/
    // cin>>s;

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
        string evenstr = "", oddstr = "";
        string ans= "";

        for (int i=0; i<26; i++) {
            if (frq[i]%2 == 0) {
                for (int j=0; j<frq[i] / 2; j++) {
                    evenstr+= char (i + 'A');
                }
            }
            else {
                for (int j=0; j<frq[i]; j++) {
                    oddstr+= char(i + 'A');
                }
            }
        }

        ans = evenstr + oddstr;
        reverse (evenstr.begin(), evenstr.end());
        ans+= evenstr;

        cout << ans << endl;
    }
}