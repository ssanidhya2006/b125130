#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float cMarks, mathMarks, physicsMarks;
    float total, average;
};

int main()
{
    struct Student s;

   
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks in C: ");
    scanf("%f", &s.cMarks);

    printf("Enter Marks in Mathematics: ");
    scanf("%f", &s.mathMarks);

    printf("Enter Marks in Physics: ");
    scanf("%f", &s.physicsMarks);

    
    s.total = s.cMarks + s.mathMarks + s.physicsMarks;
    s.average = s.total / 3;


    printf("\nStudent Details\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);
    printf("Total Marks : %.2f\n", s.total);
    printf("Average     : %.2f\n", s.average);

    return 0;
}