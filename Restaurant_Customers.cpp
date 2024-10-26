#include<bits/stdc++.h>
using namespace std;
#define fast_read_input_output() ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
    fast_read_input_output()
    int n;
    cin >> n;

    vector<pair<int, int>> events; // To store both arrival and leaving events

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        events.push_back({a, 1});  // Arrival event, +1 customer
        events.push_back({b, -1}); // Leaving event, -1 customer
    }

    // Sort events: by time, with departure (-1) before arrival (+1) if times are the same
    sort(events.begin(), events.end());

    int current_customers = 0;
    int max_customers = 0;

    // Traverse through the sorted events
    for (auto event : events) {
        current_customers += event.second;
        max_customers = max(max_customers, current_customers);
    }

    cout << max_customers << endl;

    return 0;
}