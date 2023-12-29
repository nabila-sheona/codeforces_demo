#include<stdio.h>
int main(){
   int i,d,t,a,b,x=0;
   scanf("%d", &t);
   for(i=0;i<t;i++){
   scanf("%d %d", &a, &b);
   d=b-a;
   if(d>=2){
   x++;
   }
   else{

   continue;
   }
   }
   printf("%d", x);
   return 0;


}
