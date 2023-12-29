#include<stdio.h>
#include<string.h>
int  main()
{

    int i,n,c=0;

  scanf("%d", &n);

 wchar_t a[1000000];

        for(i=0;i<n;i++)
        {

        scanf("%ls", a);



        if(a[0]=='T')
        {
             c+=4;

        }
        if(a[0] =='O')
        {
           c+=8;

        }
        if(a[0] =='D'){
          c+=12;

        }
     if(a[0] =='I')
        {
             c+=20;

        }
    if(a[0] =='C')
        {
            c+=6;

        }



    }
       printf("%d", c);

return 0;

}
