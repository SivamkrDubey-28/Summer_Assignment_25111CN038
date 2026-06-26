#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, len = 0, max = 0, start = 0, pos = 0;

    printf("Enter sentence: ");
    gets(str);

    for (i = 0;; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (len > max)
            {
                max = len;
                pos = start;
            }
            len = 0;
            start = i + 1;
        }
        else
            len++;

        if (str[i] == '\0')
            break;
    }

    printf("Longest word: ");
    for (i = pos; i < pos + max; i++)
        printf("%c", str[i]);

    return 0;
}