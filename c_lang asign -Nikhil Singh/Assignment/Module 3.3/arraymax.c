#include <stdio.h>
int main()
{

    int i, max;
    int a[6] = {6, 10, 74, 27, 42, 94};
    max = a[0];
    for (i = 0; i < 6; i++)
        if (a[i] > max)
        {
            max = a[i];
        }
    {
        printf("The maximum no is %d", max);
    }

    return 0;
}