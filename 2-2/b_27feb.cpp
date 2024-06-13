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
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % 3 == 0) {
            cout << "0\n"; // No moves needed if the sum is already divisible by 3
        } else {
            // Find the remainder when the sum is divided by 3
            int remainder = sum % 3;

            // Count the number of elements that need to be removed to make the sum divisible by 3
            int moves = 0;
            for (int i = 0; i < n; ++i) {
                if (a[i] % 3 == remainder) {
                    a[i] = 0; // Remove the element
                    moves = 1;
                    break;
                }
            }

            // If no single element can be removed, then try removing two elements
            if (moves == 0) {
                int count = 0;
                for (int i = 0; i < n; ++i) {
                    if (a[i] % 3 != 0) {
                        a[i] = 0;
                        count++;
                    }
                    if (count == 2) {
                        moves = 2;
                        break;
                    }
                }
            }

            cout << (moves == 0 ? -1 : moves) << "\n"; // -1 if not possible to make the sum divisible by 3
        }
    }

    return 0;
}
