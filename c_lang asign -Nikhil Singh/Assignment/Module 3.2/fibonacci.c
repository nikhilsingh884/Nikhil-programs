// 1,1,2,3,5,8,13

#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, n = 10;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}