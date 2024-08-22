#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        // We need to calculate how many operations it takes
        // to reduce all numbers from l to r to zero
        int operations = 0;

        while (l <= r) {
            // If r can be divided by 3, perform the operation
            if (r % 3 == 0) {
                r /= 3;
            } else {
                // Reduce r to the nearest divisible by 3 number
                r -= (r % 3);
            }
            operations++;
        }

        cout << operations << endl;
    }

    return 0;
}
