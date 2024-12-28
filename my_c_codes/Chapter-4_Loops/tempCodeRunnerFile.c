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
