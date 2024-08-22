#include<bits/stdc++.h>

using namespace std;


int main(){
   int t;

   cin>>t;

   while(t--){
    long long n,m;


    cin>>n>>m;
    //1xk means nxm, here we get max only by using max bricks, means minimum height, now m cant be lower than 2, n' n is always 1, and sincr we need max, m has to be lowest m/2, and nxm exists, so if m is odd, take minimum

    if(m%2!=0){ m=m-1;}

    cout<<n*(m/2)<<endl;


   }


}
