#include <stdio.h>

int main()
{
    int maths, physics, chemistry, english, hindi, sum, percentage;
    printf("Enter marks of maths : ");
    scanf("%d", &maths);
    printf("Enter marks of physics : ");
    scanf("%d", &physics);
    printf("Enter marks of chemistry : ");
    scanf("%d", &chemistry);
    printf("Enter marks of english : ");
    scanf("%d", &english);
    printf("Enter marks of hindi : ");
    scanf("%d", &hindi);
    sum = maths + physics + chemistry + english + hindi;
    percentage = (sum * 100) / 500;
    printf("Total marks : %d\n", sum);
    printf("Percentage : %d\n", percentage);
    return 0;
}