#include<stdio.h>
int main()
{
    int i,t,x1,x2,x3,y1,y2,y3;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &x1,&y1);
        scanf("%d %d", &x2,&y2);
        scanf("%d %d", &x3,&y3);
        if ((y1 == y2 || y2 == y3 || y3 == y1) && (x1 == x2 || x2 == x3 || x3 == x1))
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
     printf("\n");
    }
    return 0;

}
