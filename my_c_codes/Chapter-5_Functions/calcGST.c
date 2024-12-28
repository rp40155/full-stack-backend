//calculate the final price of an Item after calculating 18 percent GST tax on it


#include<stdio.h>

void calculatePrice(float value);  //non food item k liye fn
void foodItemGST(float value);  //food item k liye fn alag bana diya 

int main(){
    float value;
    char id;
    printf("Enter f for Food item and o for other item :\n ");
    scanf("%c",&id);
    if (id=='f')
    {
        printf("This is a Food Item \n So the GST will be 5 percent only \n");
        printf("Enter MRP Price of Food item purchased:");
        scanf("%f", &value);
        foodItemGST(value);
        return 0;
    }

else
    { 
    printf("This is not a food item \n So the tax will be 18 percent \n");
    printf("Please Enter MRP Price of item purchased:");
    scanf("%f", &value);
    calculatePrice(value);
    return 0;
    }
}

void calculatePrice(float value){
    float fPrice;
    fPrice= value + (0.18*value);

    printf("Final Price After Calculating GST is(Total Payable Amount): %f \n", fPrice);
    printf(""); // this give a single line gap(space)
    printf("Bill Break-down \n");
    printf("MRP of the item was:%f \n", value);
    printf("GST Calculated is:%f \n", (0.18 * value));
    printf("ThankYou so much for Visiting us. \n Visit again. \n Have a nice day.\n");
    } /*18 percent gst laga ke final price batana hai
    final price ko doosre variable me store kr dia ,uske bina galat answer aa rha tha  */

void foodItemGST(float value)   //food item k liye 5 % calculate hoga naa GST toh wohi define kiya h
{
    float fPrice;
    fPrice= value+ (0.05 * value);

    printf("Final Price After Calculating GST is(Total Payable Amount): %f \n", fPrice);
    printf(""); // this give a single line gap(space)
    printf("Bill Break-down \n");
    printf("MRP of the item was:%f \n", value);
    printf("GST Calculated is:%f \n", (0.05 * value));
    printf("ThankYou so much for Visiting us. \n Visit again. \n Have a nice day.\n");
}

/*error aa raha hai (saare error McAfee antivirus ki wajah se aa rhe hain ,,usmein real time scanning ki wajah se ho raha hai)
native command failed
resource unavailable
fully qualified error
virus found etc ye sab  error aa rha ha har jagh

*/
