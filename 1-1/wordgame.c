#include<stdio.h>
int main()
{
    int a,b,c,d=0,e=0,f=0,k,m,i,j,t;
    char s1[3],s2[3],s3[3];
    scanf("%d", &t);
    for(i=0;i<t;i++){
     scanf("%d", &m);
       for(j=0;j<m;j++){

        scanf("%s %s %s", s1, s2, s3);

       }

       if(s1==s2==s3){
        d+=0;
        e+=0;
        f+=0;
       }
        else if(s1==s2 && s1!=s3){
          d+=1;
          e+=1;
          f+=3;

        }

         else if(s2==s3 && s2!=s1){
          d+=3;
          e+=1;
          f+=1;

        }

         else if(s1==s3 && s1!=s2){
          d+=1;
          e+=3;
          f+=1;

        }
        else if(s1!=s2!=s3){
            d+=3;
            e+=3;
            f+=3;
        }

       printf("%d %d %d", d,e,f);
       }


    return 0;

}
