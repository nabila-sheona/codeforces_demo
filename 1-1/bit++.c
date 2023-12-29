#include<stdio.h>
int main()
{
    int a,i,x=0;
    char t[1000];
    scanf("%d", &a);
    for(i=0; i<a; i++)
    {
        scanf("%s", t);
        if(t[1]=='+'){
            x++;
        }
        else{

            x--;
        }
    }
    printf("%d\n", x);
    return 0;




}
