
#include <stdio.h>
#include <math.h>
 
int main(){
    float principal, rate, time, Amount, ci;
    printf("Enter the principal : ");
    scanf("%f",&principal);

    printf("Enter thr rate :");
    scanf("%f",&rate);

    printf("Enter the Time :");
    scanf("%f",&time);

    // Calculate the compound interest
    Amount = principal *pow ((1 + rate/100), time);
    printf("Amount = %.2f",Amount);
    printf("\n");
    ci = Amount - principal;
    
    printf("The compound interest is : %.2f", ci);
    
    return 0;

}
