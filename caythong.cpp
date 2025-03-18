#include <bits/stdc++.h>
 
int main() {
    int n = 15;
 
    int res = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int k = 1; k <= res; k++)
            printf("*");
 
        res += 2;
        printf("\n");
    }
 
  	if(n%2==0) res=n-1;
  	else res=n;
    for(int i = n + 1; i <= 2 * n; i++) {
        for(int j = 1; j <= n / 2; j++)
            printf(" ");
        for(int k = 1; k <= res; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
