# include <stdio.h>
int main()

{
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[50]={0};
    arr2[0]=arr1[n-1];
    int j=0;
    for(int i=n-2;i>=0;i--)
    {
       int s=0;
        for(int p=0;p<=j;p++)
        {
            if(arr1[i]==arr2[p])
            {
                s++;
                break;
            }
        }
        if(s==0)
        {
            arr2[j+1]=arr1[i];
            j++;
        }
    }
    printf("%d\n",j+1);
    for(int i=j;i>=0;i--)
    {
        printf("%d ",arr2[i]);
    }









}
