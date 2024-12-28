#include <stdio.h>
int sqrNum(int num)
{
    return num * num;
}

int main()
{
    int num;
    printf("Enter a Number to find Square \n");
    scanf("%d", &num);
    printf("The square of the number you entered is:-%d",sqrNum(num)); //call liya yahan

}
//ye program galat likha h correct it later