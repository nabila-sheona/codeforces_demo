#include<iostream>
using namespace std;
int main(){
   long long int n, sum=0,i=2;
   cin>>n;
   if(n==1){cout<<sum<<endl;
   return 0;
   }
   while(n>1){


   if(n%i==0){

   sum++;
   n=n/i;
   }




   i++;
   }

   cout<<sum;



}


