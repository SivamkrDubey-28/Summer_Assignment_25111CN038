#include <stdio.h>

int main()
{
    float m1, m2, m3, total, per;

    printf("Enter marks of 3 subjects: ");
    scanf("%f%f%f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    per = total / 3;

    printf("Total = %.2f\n", total);
    printf("Percentage = %.2f\n", per);

    return 0;
}