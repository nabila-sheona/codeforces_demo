#include<stdio.h>
int main()
{
 int n,count=0,d;
 scanf("%d", &n);
 if(n>=100){

 d=n/100;
 n=n%100;
 count=count+d;

 }
 if(n>=20){
 d=n/20;
 n=n%20;
 count=count+d;}

 if(n>=10){
 d=n/10;
 n=n%10;
 count=count+d;}

 if(n>=5){
 d=n/5;
 n=n%5;
 count=count+d;}

 if(n>=1){
 d=n/1;
 n=n%1;
 count=count+d;}

 printf("%d", count);

 return 0;

}
