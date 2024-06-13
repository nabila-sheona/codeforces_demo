#include <iostream>
#include <vector>

using namespace std;



int main() {


    int t;
    cin >> t;
    while (t--) {
       long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (auto &i : a) cin >> i;

    long long l = 0, r = n - 1;
    long long atk = k, sunk = 0;

    while (l <= r) {
        if (atk <= 0) break;

        if (l == r) {
            if (atk >= a[l]) sunk++;
            break;
        }

        long long dmg = atk / 2;
        if (atk == 1) {
            if (a[l] == 1) sunk++;
            atk--;
        } else if (dmg < a[l] && dmg < a[r]) {
            atk -= 2 * dmg;
            a[l] -= dmg;
            a[r] -= dmg;
        } else {
            dmg = min(a[l], a[r]);
            a[l] -= dmg;
            a[r] -= dmg;
            if (a[l] == 0) l++, sunk++;
            if (a[r] == 0) r--, sunk++;
            atk -= 2 * dmg;
        }
    }
    cout << sunk <<endl;
    }

    return 0;
}
