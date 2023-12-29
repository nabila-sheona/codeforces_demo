#include<stdio.h>
#include<string.h>
int main(){

   int c=1,d=0,n;

   scanf("%d", &n);

   char s1[30],s2[30],s3[30];

   scanf("%s", s1);

   if(n==1){
   printf("%s", s1);
   }

   else{
   n=n-1;
   while(n--){
   scanf("%s", s2);

   if(strcmp(s1,s2)==0){
   c++;
   }

   else{
   strcpy(s3,s2);
   d++;
   }

   }

    if(c>d){
   printf("%s", s1);

   }

   else{
   printf("%s", s3);
   }

   }

   return 0;

}
