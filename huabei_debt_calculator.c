/* debt_calculator.c */
/* Programmed by maemolee 2017.7.10 */
/* The most important thing worthing notice is that the usage of scanf() */
/* Version 0.3 Updated H29-09-05 */

#include<stdio.h>
#include<stdlib.h>

int main(){
    double all = 2200;
    double usable_now = 0;
    double debt_origin = 0;
    double debt_now = 0;
    double payment = 0;
    double interest = 0;
    double decrease = 0;

    printf("##############################\n");
    printf("Huabei debt calculator\n");
    printf("##############################\n\n");
    
    printf("payment = ");
    scanf("%lf", &payment);

    printf("usable_now = ");
    scanf("%lf", &usable_now);

    printf("debt_origin = ");
    scanf("%lf", &debt_origin);


    debt_now = all - usable_now;
    decrease = debt_origin - debt_now;
    interest = payment - decrease;
    
    printf("\n");
    printf("##############################\n");
    printf("interest is %.2f\n", interest);
    printf("decrease is %.2f\n", decrease);
    printf("##############################\n");
    printf("Over.\n");

    return 0;
}
