#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e;

    printf("Enter ID, Name, Salary: ");
    scanf("%d%s%f", &e.id, e.name, &e.salary);

    printf("\nID: %d", e.id);
    printf("\nName: %s", e.name);
    printf("\nSalary: %.2f", e.salary);

    return 0;
}