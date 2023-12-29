#include<stdio.h>
int main()
{
    int sum=0,i,n;

    scanf("%d", &n);
 char  d[n];


      scanf("%s", d);

     for (int i = 0; i <n; i++){
                if(d[i-1]==d[i]){

            sum++;

        }
    }
    printf("%d", sum);


    return 0;
}
