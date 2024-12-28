// If - else
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your Age(in years):-");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are an Adult");
    }
    else
    {
        printf("You are not an Adult");
    }
    return 0;
}