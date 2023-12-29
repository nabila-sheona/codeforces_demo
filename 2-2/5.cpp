#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long int> a(n + 1);

        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }

        long long int iulia = 0;
        long long int date = 0;
   unordered_map< long long int,  long long int> mp;      int p = 0;


                iulia = 0;
                date = 0;

                for (int i = 1; i <= n; i++)
                {
                    if (i % 2 == 0)
                    {

                        date += a[i];
                    }
                    else
                    {

                        iulia += a[i];
                    }

                      long long int diff = iulia-date;

            if (diff == 0 || mp.find(diff) != mp.end())
            {
                p = 1;
                break;
            }
            mp[diff] = i;


                }

         if (p==1)
                {

                    cout << "YES" << endl;

                    p = 1;

                }

        if (p == 0)
            cout << "NO" << endl;


    }

    return 0;
}
