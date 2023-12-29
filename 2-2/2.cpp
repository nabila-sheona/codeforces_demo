#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;

  while(t--){
  int p=0;

  for(int i=0;i<3;i++){

    string s;
    int a,b,c;
    a=b=c=0;

    cin>>s;
    for(int j=0;j<3;j++){

        if(s[j]=='A'){
            a++;
        }
        else if(s[j]=='B'){
            b++;
        }
        else if(s[j]=='C'){
            c++;
        }

    }

    if(a==0){

       p=1;
    }

    else if(b==0){

       p=2;
    }

    else if(c==0){

        p=3;
    }

  }

 if(p==1) {cout<<"A"<<endl;
 }

  if(p==2){  cout<<"B"<<endl;
  }

  if(p==3){cout<<"C"<<endl;
  }
}
}
