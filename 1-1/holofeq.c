#include <stdio.h>
int main()
{
int i, n, x, t=0, max=0;
scanf("%d", &n);
for (i=0; i<n; i++)
{
scanf("%d", &x);
if (x>max)
max=x;
t+=x;
}
printf("%d", n*max-t);
return 0;
}
