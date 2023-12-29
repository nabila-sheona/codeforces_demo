#include<iostream>
using namespace std;
int main(){

   long long int n,k;
   cin>>n>>k;
   long long int a[n];
   for(int i=0;i<n;i++){

    cin>>a[i];

   }
   long long int d=0;
   for(int i=0;i<n;i++){
    if(a[i]<k){
        d++;
    }
    else{

        if(a[i]%k==0){
            d+=a[i]/k;
        }
        else{

            d+=(a[i]/k)+1;
        }

    }
   }

  long long int j=d/2+d%2;

   cout<<j<<endl;



}
