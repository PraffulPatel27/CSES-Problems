#include<bits/stdc++.h>
using namespace std;
#define fast_read_input_output() ios_base::sync_with_stdio(false); cin.tie(NULL);
int countTailingZeroes (int& n) {
    int cnt = 0;
    for (int i=5; n/i >= 1; i *= 5) {
        cnt+= n / i;
    }

    return cnt;
}
int main()
{
    fast_read_input_output()
    int n;
    cin>>n;

    cout << countTailingZeroes (n) << endl;
    return 0;
}