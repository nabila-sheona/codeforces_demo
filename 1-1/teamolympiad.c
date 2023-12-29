#include<stdio.h>
int main()

{    int n,min,c,w,p[4];
    scanf("%d", &n);
    int a[n],b[4][1000],i,prog=0,math=0,pe=0;


     for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]==1)
        {
            prog++;
        }

        if(a[i]==2)
        {
            math++;
        }

        if(a[i]==3)
        {
            pe++;
        }



    if(prog<=math && prog<=pe)
    {
        min=prog;

        w=min;


    }
    if(math<=prog && math<=pe)
    {
        min=math;

        w=min;


    }
    if(pe<=math && pe<=prog)
    {
        min=pe;

        w=min;
    }



    }

     printf("%d\n", w);
  for (int i = 0; i <n; i++) {

        c=a[i];
        b[c][p[c]++] = i;
    }
     for (int i = 0; i <w; i++)
        {
            printf("%d %d %d\n", math,prog,pe);
        }
    return 0;
}
