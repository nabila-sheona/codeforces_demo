#include<stdio.h>
int main(){


int a,b,n,t,ans=0;
scanf("%d", &t);
while(t--){
        ans=0;
        int dis=0;
scanf("%d %d", &a, &b);


        if(a==b){
            printf("0\n");
            continue;
        }
        if(a>b){
            dis=a - b;
            ans++;
            if(dis % 2 !=0){
                ans++;
            }
        }
        else if(a < b){
            dis= b - a;
            ans++;
            if(dis % 2 != 1){
                ans++;
            }
        }
         printf("%d\n", ans);


}
return 0;

}
