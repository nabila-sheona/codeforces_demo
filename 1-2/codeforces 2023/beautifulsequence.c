#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
  int x,m;
  scanf("%d", &x);
  int a[x];

  for(int i=1;i<=x;i++){
  scanf("%d", &a[i]);
  }
  for(int i=1;i<=x;i++){
   if(a[i]<=i){
   puts("YES");
   goto n;
   }

  }
  puts("NO");


  n:  m=0;
    }
return 0;
}
