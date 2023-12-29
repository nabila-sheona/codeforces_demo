#include<stdio.h>
int main()
{
    int i,n, amz,total=0, best, worst,curr;
    scanf("%d", &n);
      scanf("%d", &curr);
      best=curr;
      worst=curr;
     for(i=0; i<n-1; i++){
       scanf("%d", &amz);
      if(amz>best){
            best=amz;
      total++;}
      if(amz<worst){
          worst=amz;
      total++;}
     }
     printf("%d", total);
     return 0;

}
