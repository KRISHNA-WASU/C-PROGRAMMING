// C program to illustrate the bitwise operators
#include <stdio.h>

int main()
{

    int a = 25;// binary = 11001
    int b = 5;// binary = 101
    printf("a & b: %d\n", a & b);// AND Operation 
    printf("a | b: %d\n", a | b);// OR operation
    printf("a ^ b: %d\n", a ^ b);// XOR operation 
    printf("~a: %d\n", ~a);// NOT operation 
    printf("a >> b: %d\n", a >> b);
    printf("a << b: %d\n", a << b);

    return 0;
}
