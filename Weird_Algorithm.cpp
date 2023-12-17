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
    ll int n;
    cin >> n;
    
    cout<< n <<" ";
    while (n != 1) {
        if (n%2 == 0) 
          n/= 2;
        
        else {
            n*= 3;
            n++;
        }

        cout<< n <<" ";
    }
    return 0;
}