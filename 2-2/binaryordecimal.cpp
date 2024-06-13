#include <iostream>

using namespace std;

bool is_binary_decimal(int n) {
    if (n == 1) {
        return true;
    }
    while (n % 2 == 0) {
        n /= 2;
    }
    while (n % 5 == 0) {
        n /= 5;
    }
    return n == 1;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        if (is_binary_decimal(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
