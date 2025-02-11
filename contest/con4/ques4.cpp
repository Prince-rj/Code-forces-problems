#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

struct Comp {
    bool operator()(const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    }
};

int help(int n, int k, vector<int>& arr, vector<int>& next) {
    priority_queue<vector<int>, vector<vector<int>>, Comp> pq;
    int i = 0, j = 0;
    pq.push({arr[i++], 0});
    int val = 0;

    for (int i1 = 0; i1 < k; i1++) {
        vector<int> temp = pq.top();
        pq.pop();
        val += temp[0];

        if (temp[1] == 1) {
            pq.push(temp);
        } else {
            pq.push({arr[i++], 0});
            pq.push({next[j++], 1});
        }
    }
    return val;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        vector<int> next(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> next[i];
        }

        cout << help(n, k, arr, next) << endl;
    }

    return 0;
}
