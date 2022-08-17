#include <stdio.h>
int main()
{
    int option;

    printf("Press a no. between 1 and 7: \n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;

    default:
        printf("Press a valid key.");
    }

    return 0;
}