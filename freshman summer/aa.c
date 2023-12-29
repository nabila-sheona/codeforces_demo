

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases

    while (t--) {
        long long int n;
        scanf("%lld", &n);  // Read the size of the final list

        long long int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);  // Read the final list
        }

        long long int count[2000000001] = {0};  // Array to store the count of occurrences

        // Count the occurrences of each number in the final list
        for (int i = 0; i < n; i++) {
            count[a[i] + 1000000000]++;
        }

        long long int m = 0;
        // Find a number that appears n-2 times
        for (int i = 0; i < 2000000001; i++) {
            if (count[i] == n - 2) {
                m = i - 1000000000;
                break;
            }
        }

        printf("%lld\n", m);
    }

    return 0;
}
