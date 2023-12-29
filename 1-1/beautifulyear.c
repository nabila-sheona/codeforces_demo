#include<stdio.h>
int main()
{
     int year, a, b, c, d, a1, b1, c1, d1;
     scanf("%d", &year);


     l: year=year+1;
     a=year/1000;
     a1=year%1000;
     b=(a1)/100;
     b1=a1%100;
     c=b1/10;
     c1=b1%10;
     d=c1/1;

    if(a!=b && b!=c && c!=d && a!=c && b!=d && a!=d)

        {
            printf("%d", year);
        }
    else{
        goto l;
    }


  return 0;
}
