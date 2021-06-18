#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number1 = 0;
int cimma = ',';
while (number1 <=99)
{
putchar(number1++);
putchar(comma);
putchar(' ');
}
putchar('\n');
return (0);
}
