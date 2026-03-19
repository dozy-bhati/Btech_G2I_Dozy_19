#include <stdio.h>

int main() {
    // Write C code here
    int x,y,res=1;
    printf("Enter x,y:");
    scanf("%d %d", &x,&y);
    for(int i=1; i<=y; i++)
    res*=x;
    printf("%d^%d = %d", x,y,res);
    return 0;
}