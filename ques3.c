#include <stdio.h>

int main()
{

    //note 
    //char follows modulo system
    //if we try to exceed value it will give modulo value
    //so dividing 265 with 2 is to pow 8 as 
    //char is 1 byte means 8 bits
    //so 2 pow 8 is 256
    //265-256=9
    char c=255;
    c=c+10;
    printf("%d",c);
    return 0;
}