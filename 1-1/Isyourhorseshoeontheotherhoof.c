#include<stdio.h>
int main()
{

    int i,c=0,j;
    int a[15];
    for(i=0; i<4; i++)
    {
        scanf("%d", &a[i]);
    }


    for(i=0; i<4; i++)

    {

//        for(j=1; j<=4;i++){
        if(a[i]==a[i+1])

        {
            c++;
        }

            else if(a[i]==a[i+2]){
                    c++;
            }

            else if(a[i]==a[i+3]){
                      c++;
                }

//        }

    }
    printf("%d", c);
    return 0;
}
