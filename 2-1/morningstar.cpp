#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
       long long n;
    cin >> n;
    map<long long, long long> up, side, left, right;
    long long ans = 0;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        up[x]++;
        side[y]++;
        left[x-y]++;
        right[x+y]++;
    }
    for(auto i : up)
    {
        ans+=i.second*(i.second-1);
    }
    for(auto i : side)
    {
        ans+=i.second*(i.second-1);
    }
    for(auto i : left)
    {
        ans+=i.second*(i.second-1);
    }for(auto i : right)
    {
        ans+=i.second*(i.second-1);
    }
    cout << ans << endl;
    }


}

