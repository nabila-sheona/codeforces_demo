#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int s = 1; s <= t; s++) {
		string b;
		cin >> b;


		for (int i = 0; i < b.size()-1; i += 2) {
			cout<<b[i];
		}

		cout << b[b.size()-1] <<'\n';
	}

	return 0;
}
