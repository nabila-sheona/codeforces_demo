#include<stdio.h>
int main()
{
    long long t,i;

    scanf("%lld", &t);
    for(i=0;i<t;i++)
    {
        int a,b;

   scanf("%d %d", &a, &b);


      if (a!=b){
      printf("Happy Alex\n");
      return 0;
      }
    }

       printf("Poor Alex\n");





    return 0;
}
