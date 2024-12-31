#include<stdio.h>


//notes for the static keywords
// 1. the value by default initialized to zero 
// 2. it retains the value and saves the values for 
//the variable

//3. static varible must be assigned or initiaized a
// constant value not a variable



int increment (){
    int count=0;
    count++;
    return count;
}
int decrement (){
    static int num=0;
    num--;
    return num;
}

int main(){
    int value;
    value=increment();
    value=increment();
    value=increment();
    printf("%d",value);

    printf("\n","now calling decrement function with static keyword");
     
     int diff=0;
     diff=decrement ();
     diff=decrement ();
     diff=decrement ();
     printf("%d",diff);

}