#include<stdio.h>
int main(){

int m,n,t;

int l,r,left=0,right=0;
scanf("%d", &t);
for(int i=1;i<=t;++i){
scanf("%d %d", &l, &r);
left=left+l;
right=right+r;
}

int o=t-left;
int p=t-right;
if(left>o){

        n=o;

}
else{

    n=left;

}

if((right>p)){

    m=p;

}
else{
    m=right;

}

printf("%d\n", m+n);
return 0;
}
