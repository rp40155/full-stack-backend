#include <stdio.h>
// Here I will find area of a Circle with radius given By user as Input//

int main()
{
    float pi=3.14;
    float radius;
    printf("Enter radius (in cm unit):-\n");
    scanf(" %f", &radius); //maine float mei le liya h radius taaki point ka bhi nikaal sakun//
    printf("The Area of this circle having radius ");
    printf("%f", radius);
    printf(" is:");
    printf("%f", pi*pow(radius,2));  //isko pi*radius *radius bhi likh skte thhey waise simple tareeke se//
    printf(" sq.cm.");
}