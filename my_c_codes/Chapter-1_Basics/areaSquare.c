#include <stdio.h>
// Here I will find area of a Square with Side given By user as Input//

int main(){
    int side;
    printf("Enter Side of Square (in metre):-\n");
    scanf(" %d", &side);
    printf("The Area of this square having side ");
    printf("%d", side);
    printf(" is:");
    printf("%d", side*side);
    printf(" sq.mt.");
}