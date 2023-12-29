//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int length=0,i,j,count=0,num=0;
//     char g[105]="o";
//
//    scanf("%s", g );
//    length=strlen(g);
//  for(int i=0; i<length; i++)
//    {
//        if(g[i] != g[i+1])
//        {
//            count++;
//        }
//    }
//
//
//    if(count%2==0){
//            printf("CHAT WITH HER!");
//   }
//    else{
//      printf("IGNORE HIM!");
//    }
//    return 0;
//
//
//
//
//}

#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
#define sf scanf
#define pf printf
typedef long long ll;

int main()
{
    char s[105];
    cin >> s;
    int len = strlen(s);
    sort(s, s+len);
    int count =0;
    for(int i=0; i<len; i++)
    {
        if(s[i] != s[i+1])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        pf("CHAT WITH HER!\n");
    }
    else
    {
        pf("IGNORE HIM!\n");
    }
}
