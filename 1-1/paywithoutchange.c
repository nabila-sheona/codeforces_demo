#include<stdio.h>
int main(){

int a,b,n,s,x,y;
scanf("%d", &x);
while(x--){
scanf("%d %d %d %d", &a, &b, &n, &s );


int p=s/n;

if(a<p){
p=a;
}

if (s - n * p <= b){

printf("YES\n");
}

else{
printf("NO\n");
}
}

return 0;
}
