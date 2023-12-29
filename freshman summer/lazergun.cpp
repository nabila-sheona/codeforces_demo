#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<double> s;
	int n, x0, y0, x, y,nm=0,m=0;
	cin >> n >> x0 >> y0;
	for(int i=0;i<n;i++)
	{
		cin >> x >> y;
		if(y0 - y == 0 && x0 - x == 0)
		{
			continue;
		}
		else if(y0 - y == 0)
		{
			nm=1;
		}
		else if(x0 - x == 0)
    {
			m=1;
		}
		else
		{
			s.insert(1.0*(x0 - x) / (y0 - y));
		}
	}
	cout << s.size()+nm+m << endl;
}
