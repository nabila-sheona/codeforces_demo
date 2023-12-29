#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int minOnes = n;

        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                if (i <= k)
                    minOnes = min(minOnes, n / i * k + i);

                if (n / i <= k)
                    minOnes = min(minOnes, i * k + n / i);
            }
        }

        cout << minOnes << endl;
    }

    return 0;
}
