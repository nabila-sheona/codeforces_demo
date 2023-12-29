#include<stdio.h>

int main(){
int k,l,m;

scanf("%d", &k);

 l=k/(1.08);

 m=(l+1)*1.08;

if(l*1.08==k){
printf("%d", l);

}


else if(m==k)
{
    printf("%d", l+1);

}


else{

    printf(":(");
}
return 0;

}
