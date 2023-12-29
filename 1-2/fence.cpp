#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
	int n, k;
	cin >> n >> k;

	int a[n+1] = {0};
         int num = 0;

	for (int i = 0;i < n;i++)
	{
		cin >> a[i];

		num += a[i];
	}
	int m= num;
    int ans = 1;

	for (int i = 1;i <= n-k;i++)
	{
		num = num + a[i+k-1] - a[i-1];
		if (m> num)
		{
			m= num;
			ans = i+1;
		}
	}

	cout << ans << endl;

	return 0;
}
