#include <stdio.h>
int main()
{
    int inputdays, days, years, weeks;

    printf("Enter no. of days to convert into years: ");
    scanf("%d", &inputdays);

    years = inputdays / 365;
    weeks = (inputdays % 365) / 7;
    days = inputdays - ((years * 365) + (weeks * 7));

    printf("%d days equals to\n %d years\n %d weeks\n %d days", inputdays, years, weeks, days);

    return 0;
}