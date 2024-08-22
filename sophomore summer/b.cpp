#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m,n,result=0;
        cin >>m>>n;
        int a[n];
        for(int i=0;i<n;i++){

            cin>>a[i];

        }

        sort(a, a + n);

        for(int i=0;i<n-1;i++){

                if(a[i]!=1){
                    result+=a[i]+a[i]-1;
                }

                else{

                    result++;
                }
        }

        cout << result << endl;
    }
    return 0;
}
