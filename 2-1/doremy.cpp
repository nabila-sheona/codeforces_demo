#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int x;
        map<int,int> map;
        for(int i=1; i<=n; i++)
        {

            cin>>x;

            map[x]++;


        }
        if(map.size()<3 && (abs(map.begin()->second - map.rbegin()->second) <= 1))
        {
            cout<<"Yes"<<endl;

        }

        else
        {
            cout<<"No"<<endl;
        }
    }

}
