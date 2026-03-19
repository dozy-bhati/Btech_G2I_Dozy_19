#include <stdio.h>

int main() {
    // Write C code here
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n); //use %lld for long long int if needed
    while(n!=0) {
        n/=10;
        count++;
    }
    printf("Digits = %d",count);
    return 0;
}