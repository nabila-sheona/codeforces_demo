//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int i,j,len, arr[10001],count=0;
//    char s[100];
//   scanf("%s", s);
//
//    for(i=0;i<strlen(s);i++)
//    {
//
//
//             if(s[i]=='+'){
//	        continue;
//	    }else{
//	        arr[count++]=s[i]-'0';
//	    }
//
//    }
//   qsort(arr, arr+count);
//	for(int i=0;i<count;i++){
//	    printf("%d", arr[i]);
//	    if(i==count-1){
//	        break;
//	    }
//	    printf("+");
//	}
//    return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len;
    char s[100];
    scanf("%s", s);
    len=strlen(s);
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if((s[j]!='+'))
            {
                if(s[j]>s[j+2])
                {
                    char temp=s[j];
                    s[j]=s[j+2];
                    s[j+2]=temp;
                }
            }
        }
    }
    printf("%s", s);
    return 0;
}
