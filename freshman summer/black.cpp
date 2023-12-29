#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_set<int> nums;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                nums.insert(abs(a[i] - a[j]));
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums.find(a[i]) == nums.end()) {
                cout << a[i] << endl;
                break;
            }
        }
    }

    return 0;
}
