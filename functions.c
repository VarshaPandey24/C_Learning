#include<stdio.h>

//if we do not declare or define a function 
//then by default it assumed to be returning int type of data
char func(){
    return 'a';
}

int main(){
    char a=func();
    printf("%c",a); 
}

