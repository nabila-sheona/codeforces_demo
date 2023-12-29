#include<stdio.h>
int main()
{

    int i,c=0,j,k,n,t;
    int a[100];
    scanf("%d", &t);
     for(k=0; k<t; k++)
    {
        scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);

    }


    for(i=0; i<n; i++)

    {

  for(j=i+1; j<=n;i++){
        c++;
        if(a[i]==a[j])

        {
            continue;
//            printf("%d\n", a[i]);
        }
        else if(a[i]!=a[j]){
            goto l;
        }

}

    }
    l: printf("%d\n", c);
    }
    return 0;
}
