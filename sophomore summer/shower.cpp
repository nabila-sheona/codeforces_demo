#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long t;

    cin>>t;

    while(t--)
    {

        long long n,s,m;
 cin>>n>>s>>m;

 vector<pair<long long, long long>> l(n);
        for (int i = 0; i < n; ++i) {
            cin >> l[i].first >> l[i].second;
        }
        bool canShower = false;

         if (l[0].first >= s) {
            canShower = true;
        }
        sort(l.begin(), l.end());

         for (int i = 1; i < n && !canShower; ++i) {
            if (l[i].first - l[i - 1].second >= s) {
                canShower = true;
            }
        }


        if (m - l[n - 1].second >= s) {
            canShower = true;
        }

        cout << (canShower ? "YES" : "NO") << endl;

    }

}
