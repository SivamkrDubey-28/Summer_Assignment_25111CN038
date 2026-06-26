#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, count;

    printf("Enter string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i += count)
    {
        count = 1;
        while (str[i] == str[i + count])
            count++;

        printf("%c%d", str[i], count);
    }

    return 0;
}