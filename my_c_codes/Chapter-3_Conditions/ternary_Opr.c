//Ternary Operator ka usage with an exaample
//it is used to reduce the size of code while writing conditional statements
#include <stdio.h>
    int main(){
    int age;
    printf("Enter Your Age : ");
    scanf("%d", &age);
    age >= 18 ? printf("You are an Adult \n") : printf("You are not an Adult \n");
    printf("ThankYou");
    return 0;
}