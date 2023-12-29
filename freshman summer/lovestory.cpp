#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--) {

    string swift, taylor = "codeforces";
    cin >> swift;
    int ans = 0;
    for(int i = 0; i < 10; i++)
    {
        if(swift[i] != taylor[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
    }
}
