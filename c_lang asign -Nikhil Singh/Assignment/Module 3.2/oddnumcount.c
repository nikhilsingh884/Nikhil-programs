#include <stdio.h>
int main()
{
    int a[12], i, count = 0;
    printf("Enter any ten no.s: ");
    for (i = 0; i < 10; i++)

        scanf("%d", &a[i]);

    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 != 0)
        {
            count++;
        }
    }
    printf("There are %d odd numbers.", count);

    return 0;
}