#include<stdio.h>

int main(){
    long long int a,b,c,t,d,max;
	scanf("%lld", &t);
    while(t--)
	{
    	scanf("%lld %lld %lld", &a, &b, &c);
    	if(a>b){
    	max=a-b;
    	}
    	else{
        max=b-a;
    	}

    	long long int n=2*max;

    	if(a>n || b>n || c>n){
    	printf("-1\n");

    	}

    	 else{
            d = c + max;
            if(d>n)
                d = c - max;

			printf("%lld\n", d);

		}



    }
return 0;
}
