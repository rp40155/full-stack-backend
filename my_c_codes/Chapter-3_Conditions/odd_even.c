#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number:-");
    scanf("%d",&num);
        if (num%2==0)
    {
        printf("The entered number is an Even Number");
    }
        else{
        printf("The entered number is an odd Number");
    }
    return 0;
}