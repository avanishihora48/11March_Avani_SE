#include<stdio.h>
#include<math.h> 

main() {
    float P, R, t, amount, CI;
    
    printf("Enter principle amount: ");
    scanf("%f", &P);
    
    printf("Enter rate of interest(in percentage): ");
    scanf("%f", &R);
    
    printf("Enter time period(in years): ");
    scanf("%f", &t);
    
    //a.
    amount = P * pow(1 + R/100, t);
    printf("\nThe Amount is: %.2f rs.", amount);
    
    //b.
    CI = amount - P;
    printf("\nThe Compound Interest is: %.2f rs.", CI);
    

}

