#include<stdio.h>

int main(){
                //COMMA OPERATOR
    //1."seperator"
    int a =3,b=2,d=5;

    //2.operator
    //comma operator returns rightmost operand whenever there is bracket 
   // will evaluate them and then reject 
    int k=(3,4,5);
    printf("%d\n",k); //output 5

    //3. comma operator have LEAST PRECEDENCE among all 
    int j;
    j=1,2,3;

        //ERROR
       // int r=1,2,3;
       // as we can not type to any value
     

    //here precedence of assignment operator is more so it will be 
    //evaluated as
    //(j=1),2,3;
    printf("%d\n",j);

  int var;
       int num;
       num=(var=15,var+35);
       printf("%d",num);


}