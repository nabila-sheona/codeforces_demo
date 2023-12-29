#include<stdio.h>
int main()
{
    int i,t,a,b,c,d,x,y,k,f;
    scanf("%d", &t);
    for(i=0; i<t; i++){
      scanf("%d %d %d %d %d", &a, &b, &c, &d, &k);
//      if(a%c==0){
//            x=a/c;
//
//      }
//      else if(a%c!=0){
//        x=a/c+1;
//      }
//       if(b%d==0){
//            y=b/d;
//
//      }
//      else if(b%d!=0){
//            y=b/d+1;
//      }
       x=(a+c-1)/c;
       y=(b+d-1)/d;
      f=x+y;
      if(f<=k){
      printf("%d %d\n", x, y);}
      else{
        printf("-1\n");
      }
    }
 return 0;
}
