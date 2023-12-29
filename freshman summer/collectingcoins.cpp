#include<iostream>
using namespace std;

#define sh      long long
int main(){
    sh t;
    cin>>t;
    while(t--)
    {
    sh n,a, b,c,x;
    sh cnt=0,ans=0,sum=0;
    cin>>a>>b>>c>>n;

    sum=a+b+c+n;
    x=max(a, b);
    x=max(x, c);

    if( sum%3==0 and sum/3>=x ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    }

return 0;


}
