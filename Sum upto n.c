#include <stdio.h>

int main() {
    // Write C code here
    int n,sum=0;
    printf("Enter n:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        sum+=i;
    }
    printf("sum=%d", sum);
    return 0;
}