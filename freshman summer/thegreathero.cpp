#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
scanf("%d", &t);
while(t--){

    int A,B,n;
    cin>>A;
    cin>>B;
    cin>>n;
    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

     for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int64_t points=0,dam,temp=0,m=0;

     for(int i=0;i<n;i++){
        points += int64_t(b[i] + A - 1) / A * a[i];
    }
    for(int i=0;i<n;i++){

		if (B - points + a[i] > 0)
		{
		    m=0;
			puts("YES");

			break;
		}
   m++;


    }
if(m>0){
    puts("NO");
}

}
return 0;
}
