#include<stdio.h>

int main(){
    printf("see the 128 and -128 are sam as char ");
    char a=-128;
    char b=128;

    printf("%c %c" ,a,b);

    printf("and -127 and 129 are same ");
    char c=-127;
    char d=129;
    printf("%c %c ",c ,d);
}
