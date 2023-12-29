#include<stdio.h>
int main()
{
    int a,min,c=0,i=1,t;
    scanf("%d", &t);
    while(i<=t)
     {
       scanf("%d", &a);

     min=a;


      if(a>min)
      {c=c+1;
      printf("%d", c);
    }

     }
    return 0;


}
