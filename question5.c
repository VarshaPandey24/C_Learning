#include<stdio.h>

int main(){

    //here the meaning of 0 initialy is octal number 
    int var =052;
    printf("%d",var);
    //output 42
    //but if we use format specifier as octal 

    printf("\n %o",var);
    return 0;
}