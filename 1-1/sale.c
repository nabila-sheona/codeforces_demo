#include<stdio.h>
int main(){

    int n,m,arr[1000],x,y=0;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){

        scanf("%d", &arr[i]);


    }

   for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] <arr[i])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }


    for(int i=0; i<m; i++){

    if(arr[i]<0){

    x=arr[i]*(-1);
    y+=x;
    }
    }

    printf("%d", y);
    return 0;

    }


