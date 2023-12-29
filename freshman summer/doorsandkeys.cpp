#include<iostream>
using namespace std;
int main(){

     int t;
     int a,b,c,d,e,f;
     cin>>t;
     while(t--){

        string q;
        cin>>q;
        for(int i=0;i<6;i++){


            if(q[i]=='r'){
                a=i;
            }
            else if(q[i]=='g'){
                b=i;
            }
            else if(q[i]=='b'){
                c=i;
            }
            else if(q[i]=='R'){
                d=i;
                }
            else if(q[i]=='G'){
                e=i;
            }
            else if(q[i]=='B'){
                f=i;
            }


        }

        if(a<d && b<e && c<f){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
     }


}
