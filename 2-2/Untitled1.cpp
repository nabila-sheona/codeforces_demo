#include <bits/stdc++.h>
using namespace std;

long long maxsumsubarr(long long arr[], int n)
{
    long long maxi = LONG_MIN;
    long long sum = 0;

    long long max = *max_element(arr, arr + n);

    for (int i = 0; i < n; i++)
    {

        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;
        }


        if (sum < 0)
        {
            sum = 0;
        }

    }


    if(maxi)
    {
        return maxi;
    }
    else {
            return max;
    }
}


long long MaxSub(long long a[], int n)
{

    long long sum = 0;


    long long max = *max_element(a, a + n);

    if (max <= 0)
    {

        return max;
    }


    for (int i = 0; i < n; i++)
    {


        if (a[i] > 0)
        {


            sum += a[i];
        }
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {


        int n;
        cin>>n;
        long long arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        long long maxsum=MaxSub(arr, n);
        long long maxsumsub = maxsumsubarr(arr, n);

        cout <<maxsumsub<<" "<<maxsum << endl;

    }
    return 0;
}
