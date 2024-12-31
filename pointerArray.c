#include<stdio.h>

int main(){
  //it is a fact that name of array is used as pointer to point
  //first element of an array

  int a[5];
  for(int i=0;i<5;i++){
    int c;
    c=10;
    *(a+i)=c;
  }
    for(int i=0;i<5;i++){
        printf("%d  ",a[i]);
    }
  return 0;

}