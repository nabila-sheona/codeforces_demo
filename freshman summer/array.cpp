#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> lamps;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            lamps.push_back({a, b});
        }

        sort(lamps.rbegin(), lamps.rend());
        int x = 0;
        int maxPoints = 0;

        for (auto& lamp : lamps) {
            int a = lamp.first;
            int b = lamp.second;

            if (a <= x) {
                maxPoints += b;
            } else {
                break;
            }
        }

        cout << maxPoints << endl;
    }

    return 0;
}
