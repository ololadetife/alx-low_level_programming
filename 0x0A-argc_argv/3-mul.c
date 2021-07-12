#include <stdio.h>
#include "holberton.h"

/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: 1
*/

int main(int argc, char *argv[])
{
int i;
int mul = 0;
printf("argc = %d\n", argc);
printf("what is in argv[]\n");
if (argc >= 1)
{
for (i = 0 ; i < argc ; i++)
{
printf("argv[%d] = %s\n", i, argv[i]);
argv[] = atoi(argv[i]);
mul = mul * argv[];
}
printf("Total = %d\n", mul);
}
else
{
printf("Error\n");
}
return (1);
}
