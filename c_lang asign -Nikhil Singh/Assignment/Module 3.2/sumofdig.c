#include <stdio.h>
int main()
{
    // sum of 1523

    int rem, n = 1523, sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("The sum of digits of the no. is %d", sum);

    return 0;
}