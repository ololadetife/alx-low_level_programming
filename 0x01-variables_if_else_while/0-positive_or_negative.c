#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* this prints positive or negative
* number
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is a positive number\n", n);
}
else if (n < 0)
{
printf("%d is a negative number\n", n);
}
else if (n == 0)
{
printf("%d number is zero\n", n);
}
return (0);
}
