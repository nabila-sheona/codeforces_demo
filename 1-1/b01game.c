#include<stdio.h>
#include<string.h>
int main(){

    int t,m;

    scanf("%d", &t);


    while(t--){

         char s[10000];
         int a=0, b=0;

         scanf("%s", s);


         int l=strlen(s);


         for(int i=0;i<l;i++){

         if(s[i]=='1'){

         a++;
         }

         else{
         b++;

         }
         }

         if(a<b){

         m=a;
         }

         else{


            m=b;
         }

         if(m%2==1){

             printf("DA\n");

         }

         else{
         printf("NET\n");

         }




    }

    return 0;

}
