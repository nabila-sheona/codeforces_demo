#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<pair<long long, long long>> books(n);

        for (int i = 0; i < n; i++) {
            string skills;
            cin >> books[i].first >> skills;
            if (skills == "00") {
                books[i].second = 0;
            } else if (skills == "01") {
                books[i].second = 1;
            } else if (skills == "10") {
                books[i].second = 2;
            } else if (skills == "11") {
                books[i].second = 3;
            }
        }

        long long min_time_skill_1 = 1e10;
        long long min_time_skill_2 = 1e10;
        long long min_time_both_skills = 1e10;

        for (int i = 0; i < n; i++) {
            if (books[i].second == 3) {
                min_time_both_skills = min(min_time_both_skills, books[i].first);
            } else if (books[i].second == 2) {
                min_time_skill_2 = min(min_time_skill_2, books[i].first);
            } else if (books[i].second == 1) {
                min_time_skill_1 = min(min_time_skill_1, books[i].first);
            }
        }

        long long result = min_time_both_skills;
        if (min_time_skill_1 != 1e10 && min_time_skill_2 != 1e10) {
            result = min(result, min_time_skill_1 + min_time_skill_2);
        }

        if (result == 1e10) {
            cout << -1 << endl;
        } else {
            cout << result << endl;
        }
    }

    return 0;
}
