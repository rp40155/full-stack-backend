#include<stdio.h>
#include<math.h>

float areaSquare(float side);
float areaRectangle(float len,float br);
float areaCircle(float rad);

int main()
{
    int a;
    printf("Enter \n 1:find area of square \n 2: find area of circle \n 3:find area of rectangle \n");
    scanf("%d", &a);
    if (a ==1)
    {
        float areaSquare(float side);
    }
    if (a== 2)
    {
        float areaCircle(float rad);
    }
    if (a== 3)
    {
        float areaRectangle(float len, float br);
    }
    
}

float areaSquare(float side){
    scanf("Enter Side of Square(upto 2 digit of decimal)%f",&side);
    printf("Area of the Square is: %f",side*side);

}
float areaRectangle(float len, float br){
    scanf("Enter Length of Rectangle(upto 2 digit of decimal)%f", &len);
    scanf("Enter Breadth of Rectangle(upto 2 digit of decimal)%f", &br);
    printf("Area of the Rectangle is: %f", len * br);
}
float areaCircle(float rad){
    scanf("Enter radius of Circle (upto 2 digit of decimal)%f", &rad);
    printf("Area of the Circle is: %f", 3.14*rad * rad);
}
