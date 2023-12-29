#include<stdio.h>
int main(){
   int t;
   scanf("%d", &t);
   char p[10000];
   for(int i=0;i<t;i++){

   scanf("%s", p[i]);

   if(p[i]=="c" || p[i]=="o" || p[i]=="d" || p[i]=="f" || p[i]=="r" || p[i]=="e" || p[i]=="s"){

   printf("YES");
   }

   else{
   printf("NO");
   }

   }



}
