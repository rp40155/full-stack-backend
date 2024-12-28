// Function to print namaste if user is indian citizen & bonjour if the user is a french citizen
#include <stdio.h>

void namaste();
void bonjour();

void namaste()
{
    printf("You are an Indian citizen \n");
    printf("Namaste Bhaiya\n");
}

void bonjour()
{
    printf("You are a French citizen \n");
    printf("Bonjour \n");
}

int main()
{
    printf("Enter I if you are Indian & f if you are french citizen : ");
    char ch;
    scanf("%c", &ch);
    if (ch=='i')
    {
        namaste();
    }
    if (ch=='f')
    {
        bonjour();
    }

    return 0;
}

