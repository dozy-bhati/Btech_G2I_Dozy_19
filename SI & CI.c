// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() 
{
    float P,R,T,A,CI,SI;
    printf("Enter the priciple amount,rate of interest and time:\n");
    scanf("%f%f%f", &P,&R,&T);
    SI = (P*R*T)/100;
    A = P*pow((1+R/100),T);
    CI = A-P;
    printf("The Simple interest is:%f\n",SI);
    printf("The Compound interest is:%f\n",CI);
    return 0;
}