#include<stdio.h>
int main(){

 int a, b,l;
    scanf ( "%d %d", &a, &b );
    int ans = 1;
    if(a<b){
        l=a;
    }
    else{

        l=b;
    }
    for ( int j = 1; j <=l; j++ )
    	ans *= j;
    printf ( "%d\n", ans );

    return 0;
}
