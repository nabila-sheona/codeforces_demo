#include<stdio.h>
#include<string.h>
int main(){
int t,f;
char s[1000000];
scanf("%d", &t);
while(t--){
scanf("%s", s);
for(int i=0;i<strlen(s); i++){


if (s[0] != 'y' && s[0] != 'Y'){

f=0;
break;

}

if (s[1] != 'e' && s[1] != 'E'){

f=0;
break;

}

if (s[2] != 's' && s[2] != 'S') {

f=0;
break;

}

if(s[0]=='y' || s[0]=='Y'){
        if(s[1]=='E' || s[1]=='e'){
                if(s[2]=='S' || s[2]=='s'){
  f=1;


}
        }
}
}

if(f==0){
    printf("NO\n");

}

if(f==1){
     printf("YES\n");
}
}


return 0;

}
