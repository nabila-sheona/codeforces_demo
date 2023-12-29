#include<stdio.h>
int main(){

int t;
scanf("%d", &t);
while(t--){

        unsigned long long int n,q;
scanf("%llu %llu", &n, &q);

unsigned long long int a[n];

for(int i=0;i<n;i++){
scanf("%llu", &a[i]);

}


while(q--){

unsigned long long int l,r,k;
scanf("%llu %llu %llu", &l, &r, &k);
unsigned long long int s[n];
for(int i=0;i<n;i++){

  s[i]=a[i];

for(int i=l-1;i<r;i++){

s[i]=k;

}
}

unsigned long long int sum=0;
for(int i=0;i<n;i++){
 sum+=s[i];

}

if(sum%2==0){
printf("NO\n");
}

else{
printf("YES\n");
}

}
}
return 0;
}
