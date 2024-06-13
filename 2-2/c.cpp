#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<int> result(n);

        result[0] = a[0];  // For a prefix of length 1, the answer is the first element.

        for (int i = 1; i < n; ++i)
        {
            int maxResult = 0;

            // Simulate the game for each possible move in the current prefix.

            int newValue = (a[i-1] + a[i]) / 2;
            double newValue1 = (a[i-1] + a[i]) / 2;


            int l;
            l=n/2;
            if(n%2==1)
            {


                l++;
            }

            if(i>=l)
            {
                if(i%2==0)

                {
                    newValue+=1;

                }


            }

            int newValue3=newValue*2;

            a[i] =newValue3;



        }

        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
