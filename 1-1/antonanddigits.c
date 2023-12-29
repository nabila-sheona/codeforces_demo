#include<stdio.h>
#include<string.h>
int main(){


int a=0,b=0,c,k3,k2,k5,k6,min1,min2,min3;

scanf("%d %d %d %d", &k2, &k3, &k5, &k6);

while(k2>0 && k5>0 && k6>0){
a++;
k2--;
k5--;
k6--;
}

while(k2>0 && k3>0){
b++;
k3--;
k2--;
}

printf("%d", a*256+b*32);
return 0;
}
