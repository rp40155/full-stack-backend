#include<stdio.h>
int main(){
    int i;
    for (i = 0; i <= 10; i++) /*int i;for (i= 0; i <=10; i++) iski jgh for (int i= 0; i <=10; i++) aise bhi likh skte they*/
    {
        printf("Hello Compiler \n");
    }

    for (int i = 1; i <= 20; i=i+2)
    {
        printf("Hello C \n");
    }
    return 0;
}    //2 loop chalaaye h maine ek hi function mein