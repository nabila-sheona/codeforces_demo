#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> result(n);

        // If the length is odd, start from the middle
        int start = (n % 2 == 0) ? n - 2 : n - 1;

        result[start] = a[start];

        // Iterate from the middle to both ends
        for (int i = start; i >= 0; i -= 2) {
            result[i] = a[i];

            if (i + 1 < n) {
                // Calculate the new value based on the current and next element
                int newValue = (a[i] + a[i + 1]) / 2;
                result[i] = max(result[i], newValue * 2);
                result[i + 1] = result[i];
            }
        }

        // Output the results
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
