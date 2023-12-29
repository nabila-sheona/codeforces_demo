#include<stdio.h>
int main()
{
    int a,b,n=0;

            scanf("%d %d", &a, &b);
            if(a>b)
            {
               n=0;}

            else{
                  while(a<=b)
            {
                a=a*3;
                b=b*2;
                n++;

            }

            }

          printf("%d", n);
          return 0;
}
