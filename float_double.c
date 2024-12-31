#include <stdio.h>

int main()
{
    // flaot double long double
    // float 4 bytes
    // double 8 bytes
    // long double 12 bytes

    // ways to represent floating point numbers is
    // IEEE 754
    float a = 23.12343456456;
    double b = 23.12345678987;
    long double c = 23.12345;

    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));

    printf("%.16f\n", a);
    printf("%.16lf\n", b);
    printf("%.16Lf\n", c);

    //division important property 
    //we should divide numbers as float to get correct result 

    double res=4.0/9.0;
    printf("%.16f",res);

}