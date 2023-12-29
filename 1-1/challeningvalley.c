#include<stdio.h>
int main(){

    int a[1000],b=0,n,t,c[100000];
    scanf("%d", &t);

    while(t--){
            b=0;
    scanf("%d", &n);

    int a[n];

    for(int i=0;i<n;i++){

    scanf("%d", &a[i]);

    }



       int e=1;
   for(int i=0; i<n-1 && e==1; i++){
       e=0;
       while(a[i+1] >= a[i] && i<n-1){
           i++;
       }
       if(i==n-1){
           printf("YES\n");
           break;
       }
       else{
            printf("NO\n");
       }
   }

//if(e==1){
//     printf("YES\n");
//}
    }
//}


//    for(int i=0; i<=n-1; i++){
//        for(int j=n-1; j>=0;j--){
//                b=0;
//        while(a[i+1]>=a[i] && i<n-1){
//
//            i++;
//        }
//
//        if(i==n-1){
//       printf("YES\n");
//       break;
//
//    }
//
//    else{
//    printf("NO\n");
//    }
//
//        }
//    }
//    }
    return 0;
}
