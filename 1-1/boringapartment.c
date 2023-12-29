#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,t,x,l,d;
    char s[100];
    scanf("%d", &t);
    for(i=0;i<t;i++){

    scanf("%s", s);
    l=strlen(s);
    d=s[0]-'0'-1;
    x=(10*d)+((l*(l+1))/2);
    printf("%d\n", x);
    }
    return 0;


}

