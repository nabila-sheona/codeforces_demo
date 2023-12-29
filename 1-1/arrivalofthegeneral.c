#include<stdio.h>

int main()
{

    int i,n,e,f,a[10000]={0},b[100000]={0},best=0,calc=0,c=0,d=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {

        calc=a[i];
        if(calc>best)
        {
            c=i+1;

            best=calc;



        }
        else
        {
            continue;
        }
    }
int low=a[0];

     for(i=0; i<n; i++)
    {

        if(a[i]<low || a[i]==low){
        low=a[i];
        d=i+1;
        }


    }

if(c>d){
     for(i=0; i<n; i++)
    {
        if(a[i]==best){
         e=c;
        }

    }

     for(i=0; i<n; i++)
    {

          if(a[i]==low){
          f=n-d-2;
          }

    }
}
if(c<d){
     for(i=0; i<n; i++)
    {
        if(a[i]==best){
         e=c;
        }

    }

     for(i=0; i<n; i++)
    {

          if(a[i]==low){
          f=n-d-1;
          }

    }


}


    printf("%d",f+e);
    return 0;

}
