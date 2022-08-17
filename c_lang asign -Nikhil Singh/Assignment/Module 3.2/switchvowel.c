#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character to know if it's a vowel or a consonant.: \n");
    scanf("%c", &character);

    switch (character)
    {
    case 'a':
        printf("It's a vowel");
        break;
    case 'A':
        printf("It's a vowel");
        break;
    case 'e':
        printf("It's a vowel");
        break;
    case 'E':
        printf("It's a vowel");
        break;
    case 'i':
        printf("It's a vowel");
        break;
    case 'I':
        printf("It's a vowel");
        break;
    case 'o':
        printf("It's a vowel");
        break;
    case 'O':
        printf("It's a vowel");
        break;
    case 'u':
        printf("It's a vowel");
        break;
    case 'U':
        printf("It's a vowel");
        break;

    default:
        printf("It's a conconant");
        break;

        return 0;
    }
}