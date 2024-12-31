#include<stdio.h>

/*Pointer arithmetic is used to traverse the rows and columns of the 2D array.
a + n moves the pointer a by n rows.
*(a + n) accesses the first element of the n-th row.
Adding an offset to *(a + n) shifts within the row. */
int main(){
    int arr[]={10,20,30,40,50};
    int sum=0,*p;
   
    for(p=&arr[0];p<=&arr[4];p++){
        sum+=*p;
    }
    printf("sum %d ",sum);
}