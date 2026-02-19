#include <stdio.h>

int main()
{
    int i,n,a[20];
    printf("Enter number of elements:");
    scanf("%d", &n);
    
 while(n>20) {
     printf("Error: Enter a number <=20:");
    scanf("%d",&n);
}
    for(i=0; i<n; i++) {
    scanf("%d",&a[i]);
}
printf("Contents of Array is:\n");
for(i=0; i<n; i++) {
    printf("%d\t", a[i]);
}
return 0;
}