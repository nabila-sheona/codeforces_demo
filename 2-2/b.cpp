#include <iostream>
#include <vector>
#include <algorithm>

// Function to find all divisors of a number
std::vector<int> findDivisors(int n) {
    std::vector<int> divisors;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int a, b;
        std::cin >> a >> b;

        // Calculate x
        int x = a * b;

        // Find all divisors of x
        std::vector<int> divisors = findDivisors(x);

        // Sort divisors in decreasing order
        std::sort(divisors.rbegin(), divisors.rend());

        // Output the number x such that a and b are the two largest divisors
        std::cout << divisors[0] << " " << divisors[1] << std::endl;
    }

    return 0;
}
