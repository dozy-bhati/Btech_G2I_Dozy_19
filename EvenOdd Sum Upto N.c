#include <stdio.h>

int main() {
    // Write C code here
    int n, even=0, odd=0;
    printf("Enter N:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        if(i%2 ==0) even +=i;
        else odd +=i;
    }
    printf("Evem sum =%d, Odd sum = %d", even,odd);
    return 0;
}