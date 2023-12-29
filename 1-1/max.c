#include<stdio.h>
int main()
{
    int i,t,x,y,z,a,b,c,arr[2];
    scanf("%d", &t);
    for(i=0;i<t;i++){
    scanf("%d %d %d", arr[0], arr[1], arr[2]);
       if (arr[1] != arr[2]) {
            printf("NO\n");
        }
       else{
            printf("YES\n");
           printf("%d %d %d", arr[0],arr[1],arr[2]);
        }

    }
}
