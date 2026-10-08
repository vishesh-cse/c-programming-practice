#include <stdio.h>

int main()
{
    float maths, physics, chemistry, english, hindi, sum, percentage;
    printf("Enter marks of maths : ");
    scanf("%f", &maths);
    printf("Enter marks of physics : ");
    scanf("%f", &physics);
    printf("Enter marks of chemistry : ");
    scanf("%f", &chemistry);
    printf("Enter marks of english : ");
    scanf("%f", &english);
    printf("Enter marks of hindi : ");
    scanf("%f", &hindi);
    sum = maths + physics + chemistry + english + hindi;
    percentage = (sum/500)*100;
    printf("Total marks : %.2f\n", sum);
    printf("Percentage : %.2f\n", percentage);
    return 0;
}