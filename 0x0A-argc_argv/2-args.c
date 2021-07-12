#include <stdio.h>
#include "holberton.h"

/**
* main - prints all arguments passed it receives
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char *argv[])
{
int i;
printf("argc = %d\n", argc);
printf("what is in argv[]\n");
for (i = 0 ; i < argc ; i++)
{
printf("argv[%d] = %s\n", i, argv[i]);
}
return (0);
}
