#include<stdio.h>
int main()
{
     int a,b,n[1000],c=0;
     scanf("%d %d", &a, &b);
     for(int i=1;i<=a;i++){
     scanf("%d", &n[i]);
     }
      for(int j=1;j<=a;j++){
     if(n[j]>=n[b] && n[j]>0){
     c++;
     }
     else{
        break;
     }

     }
    printf("%d", c);
    return 0;

}
