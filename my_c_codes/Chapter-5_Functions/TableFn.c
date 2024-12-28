#include <stdio.h>
void printTable(int n);

int main(){
    int n;
    printf("HERE WE ARE FINDING TABLE OF A NUMBER\n Ready?\n");

    printf("Enter Number jiska table print karna hai \n ");
    scanf("%d", &n);
    printf("Table of:%d \n", n);
    printTable(n);
}

void printTable(int n){
    for(int i=1; i<=10; i++){
        printf("%d \n",n*i);
    }
     
}
