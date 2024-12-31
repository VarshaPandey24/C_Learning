#include<stdio.h>

int main(){
    int num=121;
    int *p=&num;
    //& is called ADDRESS OF operator
    //* value of operator

    //it is also used to derefrence means to print the value stored at
    //that address
    printf("address %d \n",p);
    printf("value printed using derefrence operator %d \n",*p);

    int i=10,j=20;
    int *r,*q;
    r=&i;
    q=&j;

    *r=*q;

    printf("%d %d",*r,*q);


}