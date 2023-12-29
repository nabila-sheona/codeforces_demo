#include<stdio.h>
#include<string.h>
int main(){

   int t;
   scanf("%d", &t);
while(t--){
   int n;
   scanf("%d", &n);
    int e=0;
    char a[1000];


       for (int i = 0; i < n; i++) {
       scanf("%s", a);
        }

   if(n==1){
   printf("YES\n");

   }
    else if(n==2){

        for (int i = 1; i <strlen(a); i++) {

            char c1[2]={a[i]};
            char c2[2]={a[i-1]};
            int d=strcmp(c1,c2);
            printf("%d", d);

        if (strcmp(c1,c2)==0) {
               printf("NO\n");
        }
        else{
           printf("YES\n");
        }

        }


        }


   else{

       for (int i = 1; i < n; i++) {
        if (strcmp(a[i],a[i-1])==0) {
            e=0;

        }


        else{
        e++;
        }
    }

     for (int i = 2; i < n; i++) {

        if (strcmp(a[i],a[i-2])!=0) {
            e=0;

        }


        else{
        e++;
        }
    }

    if(e==0){
    printf("NO\n");
        }
        else{
           printf("YES\n");
        }

        }
   }


   }








