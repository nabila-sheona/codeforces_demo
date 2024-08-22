#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, d;
        cin >> s >> d;

        int n = s.length();
        int m = d.length();
        int k = 0;


        for (int i = 0; i < n && k < m; ++i) {
            if (s[i] == d[k]) {
                ++k;
            } else if (s[i] == '?') {

                s[i] = d[k];
                ++k;
            }
        }


        if (k == m) {

            for (int i = 0; i < n; ++i) {
                if (s[i] == '?') {
                    s[i] = 'a';
                }
            }
            cout << "YES\n" << s << endl;
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
