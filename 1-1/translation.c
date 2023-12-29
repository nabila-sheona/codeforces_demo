#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j;
    char c[100000],d[1000],e[10000];
    scanf("%s", c);
    scanf("%s", d);
    for(i=0,j=strlen(c)-1;i<strlen(c); i++, j--)
    {

       if(c[i]==d[j]){
        b=1;

       }
       else{
        b=0;
         break;
       }
    }


    if(b==1)
    {
        printf("YES");
    }
        else
        {

            printf("NO");
        }

    return 0;
}
