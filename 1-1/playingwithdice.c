#include<stdio.h>
int main()
{
    int a,b,i,aw=0,bw=0,dw=0,m,n;
    scanf("%d %d", &a, &b);
    for(i=1;i<=6;i++)
    {
        m=a-i;
         if(m<0){
            m=m*-1;
        }
        n=b-i;
        if(n<0){
            n=n*-1;
        }
      if(m<n){
      aw++;
      }


      else if(m>n)
      {bw++;}

      else
      {dw++;
    }

      }
      printf("%d\n", aw);
      printf("%d\n", dw);
      printf("%d\n", bw);
      return 0;
}
