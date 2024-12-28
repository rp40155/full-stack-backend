#include <stdio.h>
int main()
{
    int i=0;
    while(i<=10) 
    {
        printf("Hello Compiler \n");
        i=i+2;
    }
    int j=1;
    while(j <= 20)
    {
        printf("Hello C \n");
        j=j+2;
    }
    return 0;
} // 2 while loop chalaaye h maine ek hi function mein


//nested while loop
#include<stdio.h>
int main(){
    int i=1;
    while(i<=20){
        int j=1;
        while (j <= 10)
    {
        printf("Hello C \n");
        j=j+2;
        
    }
    printf("Hello Compiler \n");
    i = i + 2;
    }
}
