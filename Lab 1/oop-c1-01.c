#include <stdio.h>

struct student {
    int roll_no;
    char name[50];
    int age;
    float cgpa;
};

int main() {
    struct student s;

    printf("Enter roll no: ");
    scanf("%d", &s.roll_no);

    printf("Enter name: ");
    getchar();
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    printf("\nStudent Details\n");
    printf("Roll No: %d\n", s.roll_no);
    printf("Name: %s", s.name);
    printf("Age: %d\n", s.age);
    printf("CGPA: %.2f\n", s.cgpa);

    return 0;
}