//Creating custom function(Declare it); Define it; and calling it 
#include<stdio.h>
void printHello();


//define a funcion that has been declared already
void printHello(){
    for (int i = 1; i <= 5; i++)
    {
    printf("Hello compiler \n");
    }
}

//Calling a function that has already been declared and defined (define krne se phle call kar skte hai  but declare krne se phle nhi call kr skte)
int main(){
    printHello();  //khali fn ka naam type kr diya jata h call krne k liye 
}