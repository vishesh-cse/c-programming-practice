#include <stdio.h>

int main()
{
    int a, b, area, perimeter;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    area = a * b;
    perimeter = 2 * (a + b);

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}