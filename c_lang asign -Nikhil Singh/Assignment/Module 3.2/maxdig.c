// 567129

#include <stdio.h>
int main()
{
    int rem, max = 0, n, i;

    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {

        rem = n % 10;
        if (rem > max)
        {
            max = rem;
        }
        n = n / 10;
    }
    printf("The maximum num is %d ", max);

    return 0;
}