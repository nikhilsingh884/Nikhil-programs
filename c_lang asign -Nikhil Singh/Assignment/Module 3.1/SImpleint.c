#include <stdio.h>
int main()
{
    float principle, rate_of_interest, tenure;

    printf("Enter principle amount: \n");
    scanf("%f", &principle);

    printf("Enter rate of interest: \n");
    scanf("%f", &rate_of_interest);

    printf("Enter tenure in months: \n");
    scanf("%f", &tenure);

    printf("The interest amount is %f", (principle * rate_of_interest * tenure) / 1200);

    return 0;
}