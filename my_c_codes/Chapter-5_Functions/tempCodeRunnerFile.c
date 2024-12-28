// calculate the final price of an Item after calculating 18 percent GST tax on it

#include <stdio.h>

void calculatePrice(float value);

int main()
{
    float value;
    printf("Enter MRP Price of item purchased:");
    scanf("%f", &value);
    calculatePrice(value);
    return 0;
}

void calculatePrice(float value)
{
    value = value + (0.18 * value); // 18 percent gst laga ke final price batana hai
    printf("Final Price After Calculating GST is: %f \n", value);
    printf(""); // this give a single line gap(space)
    printf("Bill Break-down \n");
    printf("MRP of the item was:%f \n", value);
    printf("GST Calculated is:%f \n", (0.18 * value));
}