#include<stdio.h>
int main(){

long long int t;

scanf("%lld", &t);

long long int a[t];

for(int i=0;i<t;i++){

scanf("%lld", &a[i]);
}

  for (int i = 0; i < t; i++) {
        for (int j = i+1; j < t; j++) {
           if(a[i] > a[j]) {
               long long int temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
        }
    }
long long int j = t/2;

if(t%2!=0){

    j+=1;
}

long long int k=j;
	for (int i =k-1; i >= 0; i--)
	{
		printf("%lld ", a[i]);
		if (j < t)
		{
			printf("%lld ", a[j]);
			j++;
		}
	}
return 0;

}
