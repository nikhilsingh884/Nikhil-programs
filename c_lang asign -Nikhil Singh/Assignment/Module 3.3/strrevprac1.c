#include <stdio.h>
#include <string.h>
int main()
{
    int i, l;
    char s[20] = "Tops technologies";
    l = strlen(s);
    for (i = l - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }

    return 0;
}
