#include<stdio.h>
int main()
{
    int i,t,p,q,j,c=0,d=0,e=0,a=0;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &q);
        d=0,e=0;
        for(j=0; j<q; j++)
        {
            scanf("%d", &p);
            if(p==2)
            {
                d++;
            }
            else if(p==1)
            {
                e++;}
                c=c+p;

        }

        if(e%2==0 && d%2==0)
        {
            printf("YES\n");

        }
        else if(e%2!=0 && d%2==0){
            printf("NO\n");
        }
        else if(d%2!=0 && e%2==0 && e>0){
            if(c%2==0){
                  printf("YES\n");
                  goto l;
            }
            else{
                 printf("NO\n");

            }

        }



    else
    {
        printf("NO\n");
    }
       l: c=0;
        d=0;
        e=0;


}
return 0;
}



