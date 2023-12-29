#include<stdio.h>
int main(){


int a,b,c,d,n,t;
scanf("%d", &t);
for(int i=0;i<t;i++){
 scanf("%d", &n);
 c=n/3;
 a=c;
 if(n%3==1){
     a+=1;
 }
 else if(n%3==2){
    c+=1;
 }


 printf("%d %d\n", a, c);
}
return 0;
}
