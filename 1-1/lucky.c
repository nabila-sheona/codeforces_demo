#include<stdio.h>
#include<string.h>
int main()
{
    int j,t,a,d,b[6];
    char c[6];
    scanf("%d", &t);
    for(j=0;j<t;j++){
    scanf("%s", c);
    for(int i=0; i<strlen(c); i++)
    {
        b[i]=c[i];


    }

    a=b[0]+b[1]+b[2];
    d=b[3]+b[4]+b[5];

    if(a==d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }
    return 0;
}
