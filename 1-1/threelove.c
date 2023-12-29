#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if((n-2)%3){
	printf("1 1 %d",n-2);}

	else {
	printf("1 2 %d",n-3);}
	return 0;
}
