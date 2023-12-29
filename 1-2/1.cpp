
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int N;
	cin >> N;
	vector <int> a(N, 0);
	for (int i = 0; i < N; i++)
	{
		int b;
		cin >> b;
		a[i] = b;
	}

	sort(a.begin(), a.end());
	int j = ceil(N / 2.0);
	for (int i = j - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
		if (j < N)
		{
			cout << a[j] << " ";
			j++;
		}
	}
	return 0;
}
