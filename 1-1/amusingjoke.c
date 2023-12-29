#include<stdio.h>
char sort(char str[1000000],int len)
{
    int i,j;
    char tem;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-1-i;j++)
        {
            if(str[j]>str[j+1])
            {
                tem=str[j];
                str[j]=str[j+1];
                str[j+1]=tem;
            }
        }
    }
}
int main()
{

    int a,b,c,m=0,l=0,n;
    char d[100000],e[1000000],f[10000];
    scanf("%s %s %s", d,e,f);
    a=strlen(d);
    b=strlen(e);
    c=strlen(f);
    strcat(d,c);

    sort(d,&a);
    sort(e,&b);


   if(strcmp(d,e)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }



    return 0;
}
