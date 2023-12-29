#include <iostream>
#include <vector>
#include <string>

using namespace std;

string check_carpet(vector<string>& carpet) {
    int n = carpet.size();
    int m = carpet[0].size();

    for (int c1 = 0; c1 < m; ++c1) {
        for (int c2 = c1 + 1; c2 < m; ++c2) {
            for (int c3 = c2 + 1; c3 < m; ++c3) {
                for (int c4 = c3 + 1; c4 < m; ++c4) {
                    int vc = 0, ic = 0, kc = 0, ac = 0;
                    for (int r = 0; r < n; ++r) {
                        if (carpet[r][c1] == 'v') vc++;
                        if (carpet[r][c2] == 'i') ic++;
                        if (carpet[r][c3] == 'k') kc++;
                        if (carpet[r][c4] == 'a') ac++;
                    }
                    if (vc >= 1 && ic >= 1 && kc >= 1 && ac >= 1) {
                        return "YES";
                    }
                }
            }
        }
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;

        vector<string> carpet(n);
        for (int j = 0; j < n; ++j) {
            cin >> carpet[j];
        }

        string result = check_carpet(carpet);
        cout << result << endl;
    }

    return 0;
}
