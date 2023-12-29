#include<stdio.h>
int main(){

    int d,l,n,drr[1000],i,j,temp;
    double max=0;
    scanf("%d %d", &n, &l);

    for( int i=0;i<n;i++){
    scanf("%d", &drr[i]);
    }

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(drr[j+1]<drr[j])
            {
                temp=drr[j+1];
                drr[j+1]=drr[j];
                drr[j]=temp;

            }
        }
    }
     for(i=0;i<n-1;i++)
    {
        if(drr[i+1]-drr[i]>max)
            max=drr[i+1]-drr[i];
    }
    max=max/2;
    if(drr[0]>max)
        max=drr[0];
    if(l-drr[n-1]>max)
        max=l-drr[n-1];
    printf("%lf",max);
    return 0;

}
