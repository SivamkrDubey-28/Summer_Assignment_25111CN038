#include <stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for (int x = 0; x < n1; x++)
        scanf("%d", &a[x]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for (int x = 0; x < n2; x++)
        scanf("%d", &b[x]);

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n1)
        c[k++] = a[i++];

    while (j < n2)
        c[k++] = b[j++];

    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}