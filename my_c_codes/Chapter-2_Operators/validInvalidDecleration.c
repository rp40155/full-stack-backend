#include<stdio.h>
int main(){

// valid declaration
int age1, age2, age3;
age1 = age2 = age3 = 22;
// invalid
// int a1 = a2 = a3 = 22;

printf("%d \n",age1);
printf("%d \n", age2);
printf("%d \n", age3);
return 0;
}