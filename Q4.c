#include <stdio.h>

int main()
{
    unsigned i=1;
    int j=-4;

    //note 
    //here the answer is -3
    //unsigned is 2's complement of -3 
    //which is 4294967293

    //but if we printed this as decimal %d then it will print -3

    printf("%u\n",i+j);
    printf("%d",i+j);

    return 0;
}