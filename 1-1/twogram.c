#include<stdio.h>
#include<string.h>

int main(){

    int n, a[1000],c[1000];
    scanf("%d", &n);
    char s[n];

    scanf("%s", s);

   int res = 0;
	char ans,ans2;
	for (int i = 0; i < n - 1; ++i) {
		int cur = 0;
		for (int j = 0; j < n - 1; ++j)
			if (s[j] == s[i] && s[j + 1] == s[i + 1])
				++cur;
		if (res < cur) {
			res = cur;
			ans = s[i];
			ans2= s[i + 1];
		}
	}

    printf("%s %s", ans, ans2);



    return 0;


}
