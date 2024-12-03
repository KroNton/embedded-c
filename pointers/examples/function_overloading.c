
#include <stdio.h>

int add(int a, int b)
{
    printf("value of inputs are %d,%d\n", a, b);
    return a + b;
}

int subtract(int a, int b)
{
    printf("value of inputs are %d,%d\n", a, b);
    return a - b;
}

int multiply(int a, int b)
{
    printf("value of inputs are %d,%d\n", a, b);
    return a * b;
}

int main()
{
    //  array of pointers to function
    int (*fun_ptr[])(int, int) = {add, subtract, multiply};

    // both ways are fine to call the function using  pointer to function
    int result1 = (*fun_ptr[0])(5, 3);

    int result2 = fun_ptr[1](5, 3);

    int result3 = fun_ptr[2](5, 3);

    printf("the result is %d\n", result1);

    printf("the result is %d\n", result2);

    printf("the result is %d\n", result3);

    return 0;
}