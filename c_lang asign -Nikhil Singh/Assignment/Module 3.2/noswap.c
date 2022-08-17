#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    c = b;
    b = a;
    a = c;
    printf("The value of a after swapping is: ", a);
    printf("The value of b after swapping is: ", b);

    return 0;
}