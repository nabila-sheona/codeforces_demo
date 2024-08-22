#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;

    cin>>t;

    while(t--){

    int n;
    cin >> n;
    long long max_sum=0;
    int optimalofx=2;
     for(int x=2;x<=n;x++){
        long long sum=0;

        for(int k=1;k*x<=n;k++){
            sum+=k*x;

        }

        if(sum>max_sum){
            max_sum=sum;
            optimalofx=x;
        }
     }
    cout << optimalofx<<endl;
}
}
