#include <stdio.h>
int main()
{
    int a;

    printf("Enter a no.: ");
    scanf("%d", &a);

    if (a % 2 != 0)

        printf("The no. is an odd no.");

    else

        printf("The no. is an even no.");

    return 0;
}