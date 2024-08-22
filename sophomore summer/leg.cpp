#include<iostream>

using namespace std;

int main(){
   int t;

   cin>>t;

   long long cnt=0;

   while(t--){
    long long n;


    cin>>n;



    if(n>2){
        cnt=n/4;



    }

    if(n%4==2 || n==2){

        cnt++;
    }
    cout<<cnt<<endl;
   }




}
