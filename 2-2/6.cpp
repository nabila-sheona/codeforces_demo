#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> intervals;

        for (int i = 0; i < n; ++i) {
            int ai, bi;
            cin >> ai >> bi;
            intervals.push_back({ai, bi});
        }

        sort(intervals.begin(), intervals.end());

        vector<int> greetings;

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (intervals[j].first < intervals[i].second) {
                    // People i and j will meet at some point
                    greetings[i];
                }

                else {
                    // No need to check further as the intervals are sorted
                    break;
                }
            }



        }

 sort(greetings.begin(), greetings.end());
 int maxw;
 for(int i=0;i<n;i++){

    maxw=greetings[i];
 }

        cout << maxw << endl;
    }

    return 0;
}
