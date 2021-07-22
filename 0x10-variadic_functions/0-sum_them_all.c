#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: number of arguments
* @va_list: lists arguments
* @va_start: connects argument lists
* @va_arg: gets data currently connected to argument
* @va_end: stops argument 
* @ap:arguments 
* Return: sum of the parameters
*/
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}

va_list ap;
int sum;

va_start (ap, count);         /* Initialize the argument list. */
sum = 0;
for (n = 0;  n < count; n++)
    sum += va_arg (ap, int);    /* Get the next argument value. */

  va_end (ap);                  /* Clean up. */
  return sum;
}
