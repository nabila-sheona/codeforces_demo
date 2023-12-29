#include<stdio.h>
int main()
{
    int i,t,n,k,w,j=0,a;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &k);
        w=0;
        for(j=0; j<n; j++){
            scanf("%d", &a);
           w=w+a;

           }


       if(w>0){
        printf("YES\n");
       }
       else{
        printf("NO\n");
       }
    }

 return 0;
}
