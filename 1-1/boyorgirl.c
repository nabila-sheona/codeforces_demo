#include<stdio.h>

int main ()
{
    int num=0,s=0;
    char g[100];
    scanf("%s",g);

    for(int i=0 ;g[i]!=0;i++)
    {
        for(int j=i-1;j>=0;j--)
      {
          if (g[i]==g[j])
          {
             num=1;
             break;
          }
      }
      if(num==0)
      {
          s++;

      } num=0;
    }
    if (s%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}

