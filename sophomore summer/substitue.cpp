#include<bits/stdc++.h>

using namespace std;


int main(){

long long t;
cin>>t;

while(t--){
    int a[3];


    for(int i=0;i<3;i++){

        cin>>a[i];
    }

    long long sum=1e9;


for(int i=0;i<3;i++){

       long long tsum=abs(a[0]-a[i])+abs(a[1]-a[i])+abs(a[2]-a[i]);
if(tsum<sum){

    sum=tsum;
}


    }

cout<<sum<<endl;


}


}