#include<stdio.h>
int main(){
   int i,t,n,r,d=0,a;
   scanf("%d", &t);
   for(i=0;i<t;i++){
   scanf("%d", &n);
   while(n!=0){

   r=n%10;
   d=d+r;
   n=n/10;


   }

   if(n==d){
   printf("%d", d);}

//    else{
//    printf("0");}
    }
    return 0;
}
