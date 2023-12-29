#include<stdio.h>
int main()
{
    int t,i,n,a,b,c,A,B,C,d,e,f,m;
    scanf("%d", &t);
     scanf("%d %d %d %d", &a, &b, &c, &n);
    for(i=0; i<t; i++)
    {


      if(a<=b<=c)
      {
       m=2c−b−a;
       if(n<d)
      {printf("YES");}
      else{
      printf("NO");}
    }

     else if(b<=a<=c)
      {
       m=2c−b−a;
       if(n<d)
      {printf("YES");}
      else{
      printf("NO");}
    }

    else if(c<=b<=a)
      {
       if(n<(2a−b−c) )
      {printf("YES");}
      else{
      printf("NO");}
    }
     else if(b<=c<=a)
      {
       if(n<(2a−b−c) )
      {printf("YES");}
      else{
      printf("NO");}
    }
    else if(a<=c<=b)
      {
       if(n<(2b−c−a))
      {printf("YES");}
      else{
      printf("NO");}
    }

    else if(c<=a<=b)
      {
       if(n<(2b−c−a))
      {printf("YES");}
      else{
      printf("NO");}
    }
    return 0;}
