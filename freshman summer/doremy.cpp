#include<bits/stdc++.h>
using namespace std;

 gcd(long long a, long long b)
{
    if((a%b)==0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}

int main(){

   int t;
   cin>>t;
   while(t--){
    long long  n;
   cin>>n;

  long long  g,a[n];
  for(int i=1;i<n;i++){

    cin>>a[i];

  }

        g=a[0];

        for(int i=1; i<n; i++)
        {
            g=gcd(a[i], g);
        }

        cout<<a[n-1]/g<<"\n";
   }

}
