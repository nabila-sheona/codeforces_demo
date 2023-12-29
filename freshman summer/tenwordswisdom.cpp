#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n],b[n];
int m=-1, res=0,i;
for(i=1;i<=n;i++){


cin>>a[i]>>b[i];


  if(a[i]<=10 && b[i]>m){
   m=b[i];
  res=i;
  }

}


cout<<res<<endl;
}
}
