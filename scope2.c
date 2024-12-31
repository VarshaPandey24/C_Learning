#include<stdio.h>

int func();
int var=10;

int main(){
     int var =3;
     printf("the internal scope \n");
      printf("%d",var);

     printf("now calling the func\n");
     func();
     return 0;
}

int func(){
    printf("%d",var); //access the global variable
}