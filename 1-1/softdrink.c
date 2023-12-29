#include<stdio.h>


int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    k=(k*l)/nl;
    c=c*d;
    p=p/np;

      if(k<=c && k<=p){

       printf("%d", k/n);
          }
        else if(c<=k && c<=p){

            printf("%d", c/n);}
          else if(p<=k && p<=c){

             printf("%d", p/n);}
             else{
                printf("error");
             }

    return 0;

}
