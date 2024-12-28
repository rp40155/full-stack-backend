#include <stdio.h>
//Here i will take 2 numbers from user and print sum of these numbers//
int main()
{
    int num1;
    int num2;
    printf("Enter Number-1:-\n");
    scanf(" %d", &num1);
    printf("Enter Number-2:- \n");
    scanf("%d", &num2);

    printf("The sum of the 2 numbers is:- %d",num1+num2);
}