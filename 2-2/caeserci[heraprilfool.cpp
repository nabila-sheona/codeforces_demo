#include <iostream>
#include <vector>
#include <algorithm>

// Function to generate primes up to a given limit using Sieve of Eratosthenes
std::vector<int> generatePrimes(int limit) {
    std::vector<bool> isPrime(limit + 1, true);
    std::vector<int> primes;
    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p)
                isPrime[i] = false;
        }
    }
    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p])
            primes.push_back(p);
    }
    return primes;
}

// Function to check if a number is an emirp
bool isEmirp(int num, const std::vector<int>& primes) {
    int reversed = 0, n = num;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if (!std::binary_search(primes.begin(), primes.end(), reversed))
        return false;
    return true;
}

// Function to find the nth emirp
int findNthEmirp(int n) {
    int limit = 1000000; // Adjust limit as needed
    std::vector<int> primes = generatePrimes(limit);
    int count = 0;
    for (int num : primes) {
        if (isEmirp(num, primes)) {
            count++;
            if (count == n)
                return num;
        }
    }
    return -1; // If not found
}

int main() {
    int n;
    std::cin >> n;
    int result = findNthEmirp(n);
    std::cout << result << std::endl;
    return 0;
}
