
#include <stdio.h>


// listing all funcs prototypes
int sum_callback(int a,int b)
{
    printf("sum_callback function is called\n ");
    return a+b;
}

int multiply_callback(int a,int b)
{
    printf("multiply_callback function is called\n ");
    return a*b ;
}

int calculator(int (*operation_callback)(int,int),int a,int b)
{
    int result = (operation_callback(a,b));

    printf("result is %d\n",result );
    return result;
}


int main()
{
  calculator(sum_callback,3,5);
  calculator(multiply_callback,3,5);



    return 0;
}