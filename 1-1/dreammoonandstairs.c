#include<stdio.h>

int main()
{
    int x=0, n, m;
    scanf("%d %d", &n, &m);
        if (m > n){
            x = -1;
            }
        else
        {
            if (n % 2 == 0)
               {
                x = n / 2;
                }
            else{
                x = (n / 2) + 1;
                }
            while (x%m != 0)
            {
                x++;
            }
        }

       printf("%d", x);


    return 0;
}
