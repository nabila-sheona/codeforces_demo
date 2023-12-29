#include<stdio.h>
int main(){

   int t;
   scanf("%d\n", &t);
   while(t--){
    int n;
    scanf("%d\n", &n);
    long long int orange[n],candy[n];
    for(int i=0;i<n;i++){

      scanf("%lld", &orange[i]);

    }

    for(int i=0;i<n;i++){

      scanf("%lld", &candy[i]);

    }

  long long int min1=orange[0];
  long long int min2=candy[0];

    for(int i=0;i<n;i++){



         if(min1>orange[i]){
         min1=orange[i];
         }



    }


    for(int i=0;i<n;i++){



         if(min2>candy[i]){
         min2=candy[i];
         }


    }


    long long int ans=0;
     long long int p;
       long long int q;
      for(int i=0;i<n;i++){

        p=orange[i]-min1;
        q=candy[i]-min2;
       if(p>q){
       ans+=p;
       }

       else{
       ans+=q;
       }

    }


   printf("%lld\n", ans);


  }


  return 0;

}
