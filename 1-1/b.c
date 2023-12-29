//#include<stdio.h>
//#include<string.h>
//int main(){
//
//    int n,m=0;
//
//    scanf("%d\n", &n);
//    char c[10000]="";
//    for(int i=n-1;i>0;i--){
//
//        scanf("%c\n", &c[i]);
//
//
//    }
//
//    while(strchr(c,'O')!='\0'){
//       for(int i=0; i<n;i++){
//
//        if(c[i]=='O'){
//
//            c[i]='Z';
//
//                for(int j=i-1;j>=0;j--){
//                    if(c[j]=='Z'){
//                        c[j]='O';
//                    }
//                }
//
//
//
//            goto l;
//                }
//
//    }
// l: m++;
//    }
//printf("%d", m);
//
//return 0;
//
//
//
//
//}
#include <stdio.h>
#include <stdlib.h>

int main() {
	int ctr = 0;
	scanf("%d\n", &ctr);
	char str[ctr], curr;
	for(int i = 0; i < ctr-1; i++){
		scanf("%c\n", &curr);
		str[i] = curr == 'Z' ? '0' : '1';
	}
	str[ctr] = '\0';
	printf("%ld", strtol(str, '\0' , 2));
}
