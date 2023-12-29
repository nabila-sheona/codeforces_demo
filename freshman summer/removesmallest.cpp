#include <bits/stdc++.h>
using namespace std;

#define sh      long long
int main(){

 sh t;
 cin>>t;
 while(t--){

    sh n;
    cin>>n;


    vector<sh>she(n);

for (auto &it : she) cin >> it;


    sort(she.begin(),she.end());

    sh c=0;


		for (int i = 1; i < n; ++i) {
			if(she[i] - she[i - 1] <= 1) c==0;
			else c++;
		}
		if (c==0) cout << "YES" << endl;
		else cout << "NO" << endl;


    }

}











