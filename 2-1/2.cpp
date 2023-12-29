#include <iostream>
#include <vector>

using namespace std;

void solveTestCase(vector<int>& b) {
    int n = b.size();
    vector<int> a;
    a.push_back(b[0]);

    for (int i = 1; i < n; ++i) {
        if (b[i] >= b[i - 1]) {
            a.push_back(b[i]);
        } else {
            a.push_back(b[i - 1]);
        }
    }

    int m = a.size();
    cout << m << endl;
    for (int i = 0; i < m; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        solveTestCase(b);
    }

    return 0;
}
