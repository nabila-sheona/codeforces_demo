
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if((a%b)==0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}
int main()
{
    ll t, n, i, j, ans, g;

    cin>>t;

    for(;t--;)
    {
        cin>>n;

        ll a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        g=a[0];

        for(i=1; i<n; i++)
        {
            g=gcd(a[i], g);
        }

        cout<<a[n-1]/g<<"\n";
    }
}
