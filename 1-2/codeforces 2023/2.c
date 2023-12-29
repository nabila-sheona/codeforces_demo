#include<stdio.h>
int main(){

int t;
scanf("%d", &t);
while(t--){

int n;
scanf("%d", &n);

int a[n];

for(int i=0;i<n;i++){

scanf("%d", &a[i]);

}

int m=0,b=0,e=0;
for(int i=0;i<n;i++){

if(a[i]%2==0){
m+=a[i];
}

else{
b+=a[i];

}
}
if(m>b){


printf("YES\n");

}

else{
printf("NO\n");

}




}

return 0;

}
