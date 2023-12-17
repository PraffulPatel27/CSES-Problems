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
//CTCAGGTCCG - 2 
//AAAACCCGGT -4
//ACACACACAC - 1
int main()
{
    string s;
    cin>>s;
    
    int j=0, max_freq =INT_MIN;
    int current_freq =0;
    
    if (s.size() == 1)
      cout<<1<<e;
    
    else {
        for (int i=0; i<s.size()-1; i++) {
          
          if (s[i] == s[i+1])
             current_freq++;
         
          if (s[i] != s[i+1])
            current_freq=0;

        max_freq = max(max_freq, current_freq);
      }

      cout<< (max_freq+1) <<e;
    }
    return 0;
}