#include <stdio.h>
int main()
{
    // find factorial//

    int i, n, fact = 1;
    printf("Enter a value: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d", n, fact);

    return 0;
}