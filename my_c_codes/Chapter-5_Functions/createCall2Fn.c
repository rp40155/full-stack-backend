// Creating custom function(Declare it); Define it; and calling it
#include <stdio.h>
void printHello();
void printGoodbye();

// define a funcion that has been declared already
void printHello()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("Hello compiler \n");
        
    }
}

    void printGoodbye()
    {

    for (int i=2; i<=6; i=i+2)
    {
        printf("GoodBye Compiler \n");
        
    }
    }


// Calling 2 function 
int main()
{
    printHello();
    printGoodbye(); // jiss fn ko phle call krenge woh phle execute hoga 
}