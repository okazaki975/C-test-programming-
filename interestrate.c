#include<stdio.h>

int main()
{
    float principal, rate, time, interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in decimal): ");
    scanf("%f", &rate);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    interest = principal * rate * time;

    if(interest > 0){

    printf("Simple interest : %.2f\n", interest);
    } else {

    printf("Invalid input, intyerest cannot be negative.\n");

    }

        return 0;
}