#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int x, y;
        cin >> x >> y;

        vector<pair<int, int>> friends(k);
        for (int i = 0; i < k; ++i) {
            int xi, yi;
            cin >> xi >> yi;
            friends[i] = make_pair(xi, yi);
        }


            for (const auto& friendPos : friends) {
        int a = friendPos.first;
        int b = friendPos.second;
        // If any friend is in a neighboring room, Vika will be caught
        if (abs(x - a) + abs(y - b)==1) {
            cout<< "NO"<<endl;
        }
        }





     cout<< "YES"<<endl;
    }


    return 0;
}
