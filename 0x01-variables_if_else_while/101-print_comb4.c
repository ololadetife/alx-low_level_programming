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
int number2;
int number3;
int comma = ',';
while (number1 < number2 && number1 < number3 && number2 <= 9 && number3 <= 9)
{
putchar(number2++);
putchar(number1++);
putchar(number3++);
putchar(comma);
putchar(' ');
}
putchar('\n');
return (0);
}

