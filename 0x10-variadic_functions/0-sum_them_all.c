#include <stdio.h>
#include <stdarg.h>
#include variadic_functions.h

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: number of arguments
* @va_list: lists arguments
* @va_start: connects argument lists
* @va_arg: gets data currently connected to argument
* @va_end: stops argument 
* @args: argument to use
* Return: 0 if n equals zero
*/
int sum_them_all(const unsigned int n, ...)
{
    int total;
    int temp;
    total = 0;
    va_list args;
    va_start(args, count);
    for(n = 0; n < count; n++)
    {
        temp = va_arg(args, int);
        total += temp;
    }
    va_end(args);
    If (n == 0)
{
return (0);
}
}
