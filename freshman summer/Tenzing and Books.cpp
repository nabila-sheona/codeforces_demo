#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    int t;
    cin>>t;
    while(t--){

        ll n,x;
        cin>>n>>x;
        ll a[n*3],s=0;

        for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){

            cin>>a[j];

        }

              for(int j=0;j<n;j++){

           if((x | a[j]) !=x){
            break;
           }
           s|=a[j];

        }



        }


        if(s==x){ cout<<"YES"<<endl;}
        else{ cout<<"NO"<<endl;}
    }



}
