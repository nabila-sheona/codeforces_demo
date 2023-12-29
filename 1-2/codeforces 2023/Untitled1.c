#include<stdio.h>
int main(){

    int n,b=0,c=0;
    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n;i++){
        scanf("%d", &a[i]);
    }
    if(n==1){
        printf("%d 0", a[n-1]);
    }

    else{
if(n%2==0){
    int i=0, j=n-1;
int d=n/2;
     while(d--){

        if(a[i]>a[j]){

            b+=a[i];
            i++;
        }

        else{

            b+=a[j];
            j--;
        }

        if(a[i]>a[j]){

            c+=a[i];
            i++;
        }

        else{

            c+=a[j];
            j--;
        }

    }
}

     else{
            int d=n/2;
     int i=0,temp, j=n-1;

     while(d--){

        if(a[i]>a[j]){

            b+=a[i];
            i++;
        }

        else{

            b+=a[j];
            j--;
        }

        if(a[i]>a[j]){
                 temp=a[j];

            c+=a[i];
            i++;
        }

        else{
                 temp=a[i];
        c+=a[j];
            j--;
        }

    }


    b+=temp;

     }
printf("%d %d", b, c);
    }

   return 0;

}
