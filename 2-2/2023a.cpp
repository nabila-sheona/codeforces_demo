#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long int n=0,b;

        cin>>n>>b;

        long long int a[n], product=1;
        bool flag=false;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }

        for(int i=0; i<n; i++)
        {
            product=product*a[i];

        }

        if(2023%product==0)
        {
            cout<<"YES"<<endl;
            long long int ans=2023/product;
            cout<<ans<<" ";

            for(int i=1; i<b; i++)
            {

                cout<<"1 ";



            }
            cout<<endl;
        }

        else
        {

            cout<<"NO"<<endl;
        }


    }


}

