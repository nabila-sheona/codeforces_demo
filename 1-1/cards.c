#include<stdio.h>
int main()
{
   int i,t;
   scanf("%d", &t);
   for(i=1; i<=t; i++)
   {int w,h,n, p=1;
   scanf("%d %d %d", &w, &h, &n);

      while (w % 2 == 0) {
        w /= 2;
        p*= 2;
        }
      while (h % 2 == 0) {
       h /= 2;
       p *= 2;
        }
        if (p>= n)

            {printf("YES\n");}

            else{
                    printf("NO\n");
            }


   }

   return 0;

   }
