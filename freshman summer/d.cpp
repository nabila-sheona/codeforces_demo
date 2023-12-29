#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main() {
   long long int N;
    cin>>N;
    long long int result=0,a,b,c;
    for(int i=1;i<N;i++){

        a=i;
        b=i+1;
        c=i+2;
        if(((a*b)+c)==N){
            result++;
        }
        else{
            continue;
        }

    }
    cout << result*3;

    return 0;
}
