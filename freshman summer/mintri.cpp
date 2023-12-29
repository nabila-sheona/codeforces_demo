#include<bits/stdc++.h>
using namespace std;
#define sh    int
sh main(){

    sh n, sum=0;
    cin>>n;
    for(sh i=2;i<n;i++){

        sum+=i*(i+1);
    }

    cout<<sum;


}
