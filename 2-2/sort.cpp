#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){


    long long n,c,d;

    cin>>n>>c>>d;

    vector<long long>ain(n*n);

    for(int i=0;i<n*n;i++){

        cin>>ain[i];
    }

    sort(ain.begin(),ain.end());

    vector<long long>acheck(n*n);
    acheck[0]=ain[0];

    for(int i=1;i<n;i++){

        acheck[i] = acheck[i - 1] + c;

    }

     for(int i=1;i<n;i++){

  for(int j=0;j<n;j++){

        acheck[i*n+j] = acheck[(i - 1)*n+j] + d;

    }

    }

    sort(acheck.begin(),acheck.end());

    cout << (ain == acheck ? "YES" : "NO") << '\n';

}

}
