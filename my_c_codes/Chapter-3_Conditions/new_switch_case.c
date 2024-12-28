//switch case is used when we have multiple codes and koi ek hi run karna hai
//we can use switch case to make a menu driven program 
//Write a menu driven program with following options(menu driven ka matlab hum user ko options denge choose krne ko woh jo choose krega woh code chalega)

#include<stdio.h>
int main(){
    int opt;
    int a,b,s;
    int num;
    int n;
    int i;
    printf("Enter any of these Numbers to choose an option:- \n 1. ADDITION. \n 2. Odd-Even Check. \n 3. Printing first n Natural Numbers \n");
    scanf("%d",&opt);
    printf("You have entered Option-%d - ", opt);
    if (opt==1)
    {
        printf("Addition \n");
    }
    else if (opt==2)
    {
        printf("Odd-Even \n");
    }
    else {
        printf("Printing first n Natural numbers \n");

    }

switch (opt)
    {
    case 1:
        printf("Enter two Numbers to add them:-\n");
        scanf("%d","%d", &a ,&b);
        s=a+b;
        printf("Sum of the two numbers you entered is- %d ", s);
        break;
        
    case 2:
        printf("Enter a number to check Odd or Even:- \n");
        scanf("%d", &num);
        if (num%2==0)
        {
            printf("The number you entered is %d ",num);
            printf("and %d ",num);
            printf(" is  an Even Number \n");
        }
        else 
         {
        printf("The number you entered is %d ",num);
        printf("and %d ",num);
        printf(" is  an Even Number \n");
        break;
        }
    case 3:
        printf("Enter the number upto which you want to print all natural numbers:- \n");
        scanf("%d ", &n);
        printf("The number you entered is %d ",n);
        printf("and Here are all the natural numbers upto %d \n",n);
            for (int i= 1; i<=n ; i++)
            {
            printf("%d",n);
            }
        break;
    

    default:
        printf("Invalid Entry by User \n");
        printf("Thank You");
        break;
    }
    

    
}