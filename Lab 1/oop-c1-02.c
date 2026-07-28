#include <stdio.h>

struct employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct employee emp[3];
    int i;

    printf("----Enter Employee Details----\n");

    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].emp_id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n----Employee Details----\n");

    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID: %d\n", emp[i].emp_id);
        printf("Employee Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}