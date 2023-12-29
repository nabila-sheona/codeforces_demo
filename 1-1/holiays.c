#include<stdio.h>
int main(){
  int t,x;
  scanf("%d",&t);
  x=(t/7)*2;

  if(t%7==0)
    {
        printf("%d %d\n", x,x);
    }
  else if(t%7==1)
      {
          printf("%d %d\n", x,x+1);
      }
  else if(t%7==6)
      {
          printf("%d %d\n", x+1,x+2);
      }
  else
      {
          printf("%d %d\n", x,x+2);
      }

 return 0;
}
