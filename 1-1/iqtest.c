#include<stdio.h>
int main()
{


    int a,b,n,even=0,odd=0,lasteven=0,lastodd=0;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even += 1;

        }
        else
        {
        odd++;

        }


    }



     if(even>odd)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2!=0)
            {
                printf("%d", i+1);
                break;
            }
        }
    }
    else
            {
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                printf("%d", i+1);
                break;
            }

        }

            }

//    if(even>0)
//    {
//        printf("%d", lasteven);
//    }
//
//    else
//    {
//        printf("%d", lastodd);
//
//    }

    return 0;
}
