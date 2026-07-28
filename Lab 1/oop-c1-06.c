#include <stdio.h>

struct Distance
{
    int feet;
    int inches;
};

int main()
{
    struct Distance d1, d2, total;

    // Input first distance
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);

    // Input second distance
    printf("Enter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);

    // Calculate total distance
    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;

    // Display result
    printf("\nTotal Distance = %d feet %d inches\n", total.feet, total.inches);

    return 0;
}