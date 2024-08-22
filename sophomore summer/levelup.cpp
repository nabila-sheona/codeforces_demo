#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> queries(q * 2);
    for (long long j = 0; j < q; ++j) {
        long long i, k;
        cin >> i >> k;
        queries[j * 2] = i - 1;  // Convert to 0-based index
        queries[j * 2 + 1] = k;
    }

    for (long long j = 0; j < q; ++j) {
        long long idx = queries[j * 2];
        long long k = queries[j * 2 + 1];

        long long level = 1;
        long long fights = 0;

        // Determine level at the time of fighting monster at idx
        for (long long t = 0; t < idx; ++t) {
            if (a[t] <= level) {
                fights++;
                if (fights % k == 0) {
                    level++;
                }
            }
        }

        if (a[idx] <= level) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
