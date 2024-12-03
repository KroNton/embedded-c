
#include <stdio.h>

int fun(int a)
{
    printf("value of a is %d\n",a);
    return a+5;
}


int main()
{
    // both ways are fine to initialize pointer to function
    int (*fun_ptr)(int)=&fun;

    int (*fun_ptr2)(int)=fun; //the name of function itself is a pointer to the function so it can be assined without "&""
    
    // both ways are fine to call the function using  pointer to function

    int result = (*fun_ptr)(5);

    int result2 = fun_ptr2(7);
    
        printf("the result is %d\n",result);

        printf("the result is %d",result2);

    return 0;
}