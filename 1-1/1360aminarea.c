#include<stdio.h>
int main()
{

    int max,m,a,b,c,min,area,i,t;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &a, &b);
        m=a*b*2;

        if(a<b)
        {
            min=a;
        }
        else
        {
            min=b;
        }
        c=min+min;
        area=c*c;
        if(area>m){
        printf("%d\n", area);
        }
        else{
                 if(a>b)
        {
            max=a;
        }
        else
        {
            max=b;
        }
       area=max*max;

        printf("%d\n", area);



        }


    }
    return 0;
}
