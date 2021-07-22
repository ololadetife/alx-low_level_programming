#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: number of parameters
* Return: sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
int sum;
unsigned int i;
sum = 0;

va_start (valist, n);         /* Initialize the argument list. */
for (I = 0;  I < n; I++)
    sum += va_arg (valist, int);    /* Get the next argument value. */

  va_end (valist);                  /* Clean up. */
  return (sum);
}
