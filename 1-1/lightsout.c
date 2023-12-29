#include<stdio.h>
int main(){

int a[5][5]={0};
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <=3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <=3; i++)
    {
        for (int j = 1; j <=3; j++)
        {
            printf("%d", (a[i][j] + a[i - 1][j] + a[i][j - 1] + a[i + 1][j] + a[i][j + 1] + 1) % 2);
        }
        printf("\n");

    }

    return 0;


}
