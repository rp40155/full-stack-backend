#include<stdio.h>
int sum(int a, int b);
 /*declare a fn to find sum of 2 numbers..it will take 2 values a ,b that is why having two parameters in function parenthesis*/
int main(){
    int a;
    int b;
    printf("HERE WE ARE FINDING SUM OF TWO NUMBERS\n Ready?\n");
    
    printf("Enter 1st Number ");
    scanf("%d",&a);
    printf("Enter 2nd Number ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("The sum of the 2 numbers you entered is:%d", s);
    return 0;
    
}

int sum(int a,int b){
    return a+b;
}

