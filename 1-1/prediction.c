#include<stdio.h>
int main()
{
    int n,m,i,l,j;
    scanf("%d %d", &n, &m);
    i=2;
   x: while(i<n/2){

    if(n%i!=0)
    {
       goto z;
    }
    else{
            i++;
         goto x;
    }

    }
    z: l=n+1;
    y:  j=2;
    if(l%j==0)
    {
        j++;
        goto y;
    }
      else{
            if(m==l){
      printf("YES");}
      else{
      printf("NO");
      }

      }


     return 0;

      }



