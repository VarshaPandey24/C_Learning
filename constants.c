#include<stdio.h>

//studying constatnts
//TWO WAYS OF DEFINING IT 
// # define name value
//it is the job of preprocessor to replace value of name with thr value
//not of compiler
//it is good to declare constants with CAPITAL 
//here  the name is also known as macro 

//we can also use this macros as functions

//we can also use macros as multiple line functions 

//first macros replace the whole expression then only 
//they do any evaluation then try to evaluate
//focus on BODMAS after replaicng the expression

//predefined macros are __DATE__ __TIME__

#define VARSHA 100
#define MAX 2000
#define ADD(x,y) x+y
#define GREATER(x,y) if(x>y) \
                            printf("%d is greter than %d \n",x,y);\
                            else \
                             printf("%d is greter than %d \n",y,x);

int main(){
    printf(__DATE__);
    printf("\nusing macros as multiple statement function\n");
    GREATER(10,20);
    printf("using the macros as functions\n");
    printf("%d \n",5* ADD(1,2));

    printf("priting the value of varsha constant where name of the constant will be replaced by the value with the help of preprocessor\n");
    printf("%d \n",VARSHA);
    printf("now again printing the value of constant max\n");
    printf("%d \n",MAX);

    const int a=10;
    int var =052;
    printf("%d",var);

}