#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
	   int n;
     cin>>n;

     long long int b[n],s1=0,s2=0;

     for(int i=0;i<n;i++){
          cin>>b[i];

          if(b[i]>0){
               s1 = s1 + b[i];
          }

          else
          {
          	s2 = s2 + b[i];
          }


     }

     long long int x= abs(s1);
          long long int y = abs(s2);

          if(x>y){
              cout << x-y<<endl;
          }

          else if(y>x){
                cout << y-x <<endl;
          }

          else
          	cout << 0 <<endl;


     }


}
