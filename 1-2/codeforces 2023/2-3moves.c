#include<stdio.h>
int main(){

    int t;

    scanf("%d", &t);

while(t--){

  int n;

  scanf("%d", &n);

  if(n==1){
  printf("2\n");


  }


  else{

  int a=n/3;

  int b=n%3;
  if(b==0){
  a+=0;
  }

  else{
  a=n/3+1;
  }

   printf("%d\n", a);

  }





}
return 0;
}
