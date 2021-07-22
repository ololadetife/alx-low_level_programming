#include <stdio.h>
#include <stdarg.h>
#include variadic_functions.h

int sum(int count, ...)
{
    int total, i, temp;
    total = 0;
    va_list args;
    va_start(args, count);
    for(i=0; i<count; i++)
    {
        temp = va_arg(args, int);
        total += temp;
    }
    va_end(args);
    return total;
}
