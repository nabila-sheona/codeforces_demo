#include <iostream>
#include <vector>

using namespace std;

long long maxsubarraysum(long long n, long long a, long long b, vector<long long>& arr)
{
    long long maxsubarraysum = INT64_MIN;
    long long currentsum = 0;

    for (int i = 0; i < n; ++i)
    {
        currentsum += arr[i];

        if (i >= a - 1)
        {
            maxsubarraysum = max(maxsubarraysum, currentsum);
            if (i >=b -1)
            {

                currentsum -= arr[i - (b - 1)];
            }
        }
    }

    return maxsubarraysum;
}

int main()
{
    long long n, a, b;
    cin >> n >> a >> b;
    vector<long long> arr(n);
    for (long long i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << maxsubarraysum(n, a, b, arr) << endl;

    return 0;
}
