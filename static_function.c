#include<stdio.h>
#include<scope.c>

//by default functions are global so to make them unglobal put static  
int main(){
    int a= func();
    printf("%d",a);
}