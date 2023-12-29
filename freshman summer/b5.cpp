#include <iostream>
#include <vector>

using namespace std;


int main() {
    int N;
    cin >> N;

    int a[N];
    for(int i=0;i<N;i++){

        cin>>a[i];
    }

    int r=a[0],s=0;

    for( int i=1;i<N;i++){


        if(a[i]>r){
            s=i-1;
        }

    }

    cout<<s<<endl;



}
