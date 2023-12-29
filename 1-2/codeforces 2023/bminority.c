#include<stdio.h>
int main(){

   int n, p;
   scanf("%d", &n);
   while(n--){

     int a=0,b=0;
     int s[1000];
     scanf("%d", s);
     for(int i=0;i<s;i++){
      if(s[i]=='1'){
      a++;
      }

      else if(s[i]=='0'){
      b++;
      }

     }

     if(a-b==0){
     printf("0\n");

     }

     else{

            if(a>b){

     printf("%d\n", a-b);
            }

            else{

                 printf("%d\n", b-a);

            }
     }



   }
return 0;
}
