#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    long long t;

    cin >> t;

    while (t--)
    {
        long long n;

        cin >> n;

        string s = to_string(n);

        if (s[0] == '1' && s[1] == '0' && s[2] != '0')
        {

            long long p = s.length();

            long long d = 1;

            for (int i = 0; i < p - 2; i++)
            {

                d = d * 10;
            }

            n = n % d;

            s = to_string(n);

            if (n >= 2)
            {

                cout << "YES" << endl;
                continue;
            }
        }

        cout << "NO" << endl;
    }
}