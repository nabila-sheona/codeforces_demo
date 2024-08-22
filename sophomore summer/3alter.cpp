#include<bits/stdc++.h>
using namespace std;

int main(){

  long long t;

  cin>>t;

  while(t--){

    long long n,i, flag=1;

    cin>>i;

    for(i=0;i<10;i++){

        n=n-1;

        if(n%3==0){

            flag=0;
           if(flag==0){ break;}
        }




    }

    if(i==10 && n%3!=0){

        flag=1;
    }

    if(flag==0){cout<<"First"<<endl;}

    else{cout<<"Second"<<endl;}


  }


}
