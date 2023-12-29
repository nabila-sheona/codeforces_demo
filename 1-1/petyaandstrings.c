#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[100],b[100];

    scanf("%s", a);
    scanf("%s", b);
    for(i=0; i<strlen(a); i++)
    {
        a[i]=a;
    }
    int c=0;
    int d=0;

    for(i=strlen(a); i>0; i--)
    {


        if(a[strlen(a)]==b[i])
        {
            c++;


        }
        else
        {

            d++;
        }
    }

    if(  c=strlen(a))
    {

        printf("YES\n");
    }
    else
    {
        printf("NO\n");

    }





    return 0;
}
