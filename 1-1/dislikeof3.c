#include<stdio.h>
int main()
{
    int n=0,k, t;
    scanf("%d", &t);
   while(n<t)
   {
     scanf("%d", &k);

      for (int i=1;i<=1666; i++)
		{
			if (i%3==0 || i%10==3)
				continue;
			if (--k == 0)
			{
				printf("%d\n", i);
				break;
            }

        }
        n++;
    }
    return 0;

}
