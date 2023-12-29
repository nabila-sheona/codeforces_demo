#include<stdio.h>
#include<string.h>
void swap(int *c, int *d)
{


    int *temp=*c;

    *c=*d;
    *d=temp;



}

//void sort(int arr[],char name[],int size)
//{
//    printf("%s:\t",name);
//    for(int i=0;i<size;i++){
//        printf("%d\t",arr[i]);
//    }
//    printf("\n");
//}
int main()
{

    int c,d,e,t,i,k,n,sum=0;
    int a[10000],b[10000];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &k);
        for(i=0; i<n; i++)
        {

            scanf("%d", &a[i]);

        }

        for(i=0; i<n; i++)
        {
            scanf("%d", &b[i]);

        }


         for (int i = 0; i < n; i++)
        {


            for (int j = i + 1; j < n; j++)
            {


                if (a[i] > a[j])
                {

                    e =  a[i];
                    a[i] = a[j];
                    a[j] = e;

                }

            }

        }

         for (int i = 0; i < n; i++)
        {

            for (int j =1; j < n; j++)
            {

                if (b[i] > b[j])
                {

                    e =  b[i];
                    b[i] = b[j];
                    b[j] = e;

                }

            }

        }
        for(int i=0; i<k; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(b[j] > a[j])
                {
                    int c=a[j];
                    int d=b[j];
                    swap(&a[j],&b[j]);
                    break;
                }
            }
        }

        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
        }
        printf("%d\n", sum);
    }

    return 0;
}

