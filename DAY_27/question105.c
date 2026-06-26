#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter Roll, Name, Marks: ");
    scanf("%d%s%f", &s.roll, s.name, &s.marks);

    printf("\nRoll: %d", s.roll);
    printf("\nName: %s", s.name);
    printf("\nMarks: %.2f", s.marks);

    return 0;
}