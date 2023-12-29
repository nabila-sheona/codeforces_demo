#include<stdio.h>
int main()
{
    int x,y,z,i,t,p,q,r;
    scanf("%d", &t);
       p=0;
       q=0;
       r=0;
    for(i=0;i<t;i++){
       scanf("%d %d %d", &x, &y, &z);

       p=p+x;
       q=q+y;
       r=r+z;
    }

    if(p==0 && q==0 && r==0){

    printf("YES\n");
    }
    else{
    printf("NO\n");
    }
    return 0;
}
