#include <stdio.h>
int main()
{
    int a[12], i, sumeven = 0;
    printf("Enter any ten no.s: ");
    for (i = 0; i < 10; i++)

        scanf("%d", &a[i]);

    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            sumeven = sumeven + a[i];
        }
    }
    printf("The sum of all even numbers is %d", sumeven);

    return 0;
}