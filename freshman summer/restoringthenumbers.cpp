#include <bits/stdc++.h>
using namespace std;

#define sh      long long
int main(){

    vector<int> v(4);
for(int i=0;i<4;i++){
    cin>>v[i];
}
    sort(v.begin(),v.end());

    sh x=v[0];
   sh  y=v[1];
   sh z=v[2];
  sh  w=v[3];

  sh a,b,c;





    a=w-z;

    b=w-y;

    c=w-x;


   cout<<a<<' ';
   cout<<b<<' ';
   cout<<c<<' ';
}
