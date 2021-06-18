#include <stdio.h>
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
printf("this is a positive number\n");
}
else if (n < 0)
{
printf("this is a negative number\n");
}
else
{
printf("this number is zero\n");
}
return (0);
}
