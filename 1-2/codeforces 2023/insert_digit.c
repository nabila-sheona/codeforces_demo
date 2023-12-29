#include<stdio.h>
#include<string.h>
int main(){

    int t;
    scanf("%d", &t);
    while(t--){
    int a,b;

    scanf("%d %d", &a, &b);
    char c[a];
   scanf("%s", c);


    int arr[a];
    for(int i=0;i<a;i++){
     //scanf("%s", c[i]);
     arr[i]=c[i];
    }
      for(int i=0;i<a;i++){
    printf("%s\n", c[i]);
    }
    }

}
