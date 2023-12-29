#include<stdio.h>
int main()
{

    int a,b,n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int max=1,min=1;
        scanf("%d", &a);
        int t[100]={};
        for(int j=0;j<a;j++){
            scanf("%d", &t[j]);

        }

        for(int j=0;j<a;j++){
            if(t[j]>=max){
            max=t[j];
            }


        }
         for(int j=0;j<a;j++){
            if(t[j]<=min){
            min=t[j];
            }


        }

        int l=max-min;
       printf("%d\n", l);
        }

    return 0;
}
