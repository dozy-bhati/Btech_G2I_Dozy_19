// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    int a,b,c,d,e;
    float P;
    printf("Enter the marks of five subjects:\n");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    P=((a+b+c+d+e)/500.0)*100;
    if(P>=90)
    printf("Grade:A");
    else if(P<=90 && P>=70)
    printf("Grade:B");
    else if(P<=70 && P>=50)
    printf("Grade:C");
    else if(P<=50 && P>=30)
    printf("Grade:D");
    else 
    printf("Grade:F");
    
    return 0;
}
