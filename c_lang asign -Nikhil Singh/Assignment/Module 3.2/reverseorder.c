#include <stdio.h>
int main()
{
    // reverese of 64728

    int rem, n = 64728, sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = (sum * 10) + rem;
        n = n / 10;
    }
    printf("The reversed no. is %d", sum);

    return 0;
}