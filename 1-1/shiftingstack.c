#include<stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    int arr[1000];

    for(int i=0; i<n; i++)
    {

        scanf("%d", &arr[i]);

    }

    long long int sum = 0, need = 0;
    for (int i = 0; i < n; ++i)
    {
        need += i;
        sum += arr[i];



        if (sum < need)
        {
            printf("NO\n");
            return;
        }
}


    printf("YES\n");


}


int main()
{

    int t,n,arr[1000];
    scanf("%d", &t);

    while(t--)
    {


        solve();

    }

    return 0;

}
