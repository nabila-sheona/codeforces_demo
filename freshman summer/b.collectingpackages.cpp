#include<bits/stdc++.h>
using namespace std;

void shpush(string sheona,int a,int b)
{
    for(int i=0;i<a;i++)
    sheona.push_back('R');

    for(int i=0;i<b;i++)
    sheona.push_back('U');
}

#define sh      long long
int main(){
    sh t;
    cin >> t;

    for (int tt = 0; tt < t; tt++) {
     	int n;
    	cin >> n;
    	vector<pair<sh, sh>> ath(n);
    	for (int i = 0; i < n; ++i) {
    		cin >> ath[i].first >> ath[i].second;
    	}
    	sort(ath.begin(), ath.end());
    	pair<sh, sh> k = make_pair(0, 0);
    	string ans;
    	sh ok = 0;
    	for (int i = 0; i < n; ++i) {
    		sh r = ath[i].first - k.first;
    		sh u = ath[i].second - k.second;
    		if (r < 0 || u < 0) {
    			cout << "NO" << endl;
    			ok++;
    			break;
    		}
    		ans += string(r, 'R');
    		ans += string(u, 'U');
            k = ath[i];
    	}

    	if (ok==0)
    	    cout << "YES" << endl << ans << endl;
   }

	return 0;
}
