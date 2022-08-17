#include <stdio.h>
int main()
{
    int a, b, option;
    printf("Enter first no.: ", a);
    scanf("%d", &a);

    printf("Enter second no.: ", b);
    scanf("%d", &b);

    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("addition of %d and %d is %d", a, b, a + b);
        break;

    case 2:
        printf("Subtraction of %d and %d is %d", a, b, a - b);
        break;

    case 3:
        printf("multiplication of %d and %d is %d", a, b, a * b);
        break;

    case 4:
        printf("division of %d and %d is %d", a, b, a / b);
        break;

    default:
        printf("Please enter a valid option.");
    }

    return 0;
}