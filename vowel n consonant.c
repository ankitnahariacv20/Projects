#include <stdio.h>

int main()
{
    char alphabet;

    printf("Enter any alphabet: ");
    scanf("%c", &alphabet);

    switch(alphabet)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }

    return 0;
}

