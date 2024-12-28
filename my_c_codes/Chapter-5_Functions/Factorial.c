// Function to calculate n factorial(using recursion)
#include <stdio.h>
// function to print factorial of n
int factorial(int n);

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    printf("factorial is : %d", factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    for (int i=n; i >=1; i--){
        int next;
        next=i--;
        return i*("%d",next);
        }

 return 0;
}

//galat hai program yeh 