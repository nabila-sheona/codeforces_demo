#include<stdio.h>
#include<math.h>
int main()
{
    int a[6][6],x,y,b,i,j;
    for(i=1; i<6; i++)
    {

        for(j=1; j<6; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j]==1)
            {

                x=abs(i-3);
                y=abs(j-3);
                b=x+y;
            }

        }
    }
    printf("%d", b );
    return 0;

}
