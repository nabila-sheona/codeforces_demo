#include<stdio.h>
int main()
{

    int a,b,c;
    scanf("%d", &c);
    while(c>=12){
    if(c%2==0)
    {
        printf("4 %d", c-4);
        break;
    }
    else
    {
        printf("9 %d", c-9);
        break;
    }
    }
    return 0;
}
