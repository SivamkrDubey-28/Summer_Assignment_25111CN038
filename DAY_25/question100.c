#include <stdio.h>
#include <string.h>

int main()
{
    char word[5][50], temp[50];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter word: ");
        scanf("%s", word[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strlen(word[i]) > strlen(word[j]))
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    for (int i = 0; i < 5; i++)
        printf("%s\n", word[i]);

    return 0;
}