#include<stdio.h>
int main(){
long long int n;
scanf("%lld", &n);

if(n%2==0){

printf("2\n4 %lld", n-4);
}

else{

printf("2\n9 %lld", n-9);
}
}
