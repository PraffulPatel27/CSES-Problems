#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    int inital_sum=0;
    for(int i=0; i<n; i++) {
       cin>>v[i];
       inital_sum+= v[i];
    }

    int sum=0;
    for (int i=1; i<=n; i++) {
        sum+= i;
    }

    cout<< (sum- inital_sum )<<"\n";
    
    
    return 0;
}