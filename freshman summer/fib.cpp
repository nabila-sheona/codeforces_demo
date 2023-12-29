#include<bits/stdc++.h>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--){

    int n,k;
    cin>>n>>k;
         if(k>30){
            cout<<0<<endl;
            continue;
        }
        int sum=0;

    for(int i=0;i<=n;i++){
     int sec=n;
     int f=i;

     bool yes=true;
     for(int j=1;j<=k-2;j++){
        int temp=sec-f;
        sec=f;
        f=temp;

        if(f<=sec && f>-1){
            continue;
        }
        else{
            yes=false;
            break;
        }

     }
        if(yes){
            sum++;
        }
    }

    cout<<sum<<endl;
   }


}
