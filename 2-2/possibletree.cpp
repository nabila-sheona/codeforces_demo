#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Calculate the minimum height
        int h = 0;

        // Case 1: If 'c' is greater than 'a', no such tree exists
        if (c > a) {
            cout << "-1" << endl;
            continue;
        }

        // Distribute vertices with 2 children to vertices with 0 children
        h += min(a, c);
        a -= h;
        c -= h;

        // Distribute vertices with 2 children to vertices with 1 child
        h += min(a / 2, b);

        cout << h << endl;
    }
    return 0;
}
