#include <stdio.h>

int main() {
    // Write C code here
    int n,ce=0,co=0;
    printf("Enter number of elements in an array: ");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        ce++;
        else
        co++;
    }
    printf("Number of even numbers in array: %d \n",ce);
    printf("Number of odd numbers in array: %d",co);
    return 0;
}
    res*=x;
    printf("%d^%d = %d", x,y,res);
    return 0;
}