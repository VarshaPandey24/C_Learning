#include<stdio.h>

int *findMid(int arr[],int n){
        return &arr[n/2];
}
int  main(){
        int var=10;
        int *ptr=&var;
        printf("the address of the variable var is %p \n",ptr);
        //hexadecimal form address
        int a[]={1,2,3,4,5};
        int n=sizeof(a)/sizeof(a[0]);
        int *mid=findMid(a,n);
        printf("%d ",*mid);
}
