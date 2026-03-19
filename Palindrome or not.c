#include <stdio.h>

int main() {
    // Write C code here
     int n, orig, rev=0;
     printf("Enter a number:");
     scanf("%d", &n);
     orig = n;
     while(n!=0) {
         rev = rev*10 + n%10;
         n /= 10;
     }
     if(orig == rev) 
     printf("Palindrome");
     else printf("Not Palindrome");
    return 0;
}