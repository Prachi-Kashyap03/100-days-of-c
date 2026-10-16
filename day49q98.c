//printf initials of name with the surname displayed in full
#include <stdio.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    scanf("%99[^\n]", name);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    printf("Formatted name: ");

    for (i = 0; i <= lastSpace; i++)
    {
        if (i == 0 && name[i] != ' ')
        {
            printf("%c. ", name[i]);
        }
        else if (name[i] == ' ' &&
                 name[i + 1] != ' ' &&
                 i < lastSpace)
        {
            printf("%c. ", name[i + 1]);
        }
    }

    if (lastSpace == -1)
    {
        printf("%s", name);
    }
    else
    {
        printf("%s", name + lastSpace + 1);
    }

    printf("\n");

    return 0;
}
