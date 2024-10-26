#include <bits/stdc++.h>
using namespace std;
// Segment tree for range minimum queries
class SegmentTree {
public:
    vector<long long> tree;
    int n;

    SegmentTree(vector<long long>& arr) {
        n = arr.size();
        tree.resize(4 * n);
        build(arr, 0, 0, n - 1);
    }

    // Build the segment tree
    void build(vector<long long>& arr, int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            build(arr, 2 * node + 1, start, mid);
            build(arr, 2 * node + 2, mid + 1, end);
            tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
        }
    }

    // Query the minimum value in the range [l, r]
    long long query(int node, int start, int end, int l, int r) {
        if (r < start || end < l) {
            // Out of range, return a very large number
            return LLONG_MAX;
        }
        if (l <= start && end <= r) {
            // Fully within the range
            return tree[node];
        }
        // Partially in the range, split and query both halves
        int mid = (start + end) / 2;
        long long left = query(2 * node + 1, start, mid, l, r);
        long long right = query(2 * node + 2, mid + 1, end, l, r);
        return min(left, right);
    }

    // Query public function
    long long query(int l, int r) {
        return query(0, 0, n - 1, l, r);
    }
};
int main() {
    long long n, q;
    cin >> n >> q;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Step 1: Build the segment tree
    SegmentTree st(v);

    // Step 2: Answer each query in O(log n)
    while (q--) {
        long long a, b;
        cin >> a >> b;
        // Convert 1-based indexing to 0-based indexing
        cout << st.query(a - 1, b - 1) << endl;
    }

    return 0;
}
