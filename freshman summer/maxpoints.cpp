#include<bits/stdc++.h>
using namespace std;
int main(){

      int t;
      cin>>t;
      while(t--){

      int n,a,b;

      cin>>n>>a>>b;

      string ar;

      int ans;


         cin>>ar;


      if(b>0){

      ans=(a*n)+(b*n);

      }

      else{
      ans =n*a;
      int total=0;

      for(int i=1;i<n;i++){

      if(ar[i]!=ar[i-1]){
      total++;

      }


      }

      total++;

      ans+=((total/2)+1)*b;

      }



       cout<<ans<<endl;

      }



}
