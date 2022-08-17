#include <stdio.h>
int main()
{
    int i, j, temp, option;
    int a[5];
    printf("Enter values to be sorted:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Press 1 for ascending order.\n");
    printf("Press 2 for decending order.\n\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)

                if (a[j] < a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }

            printf("%d ", a[i]);
        }

        break;

    case 2:
        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j > 5; j++)

                if (a[j] > a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }

            printf("%d ", a[i]);
        }
    }

    return 0;
}