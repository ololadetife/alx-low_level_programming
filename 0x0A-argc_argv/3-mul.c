#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: 1
*/

int main(int argc, char *argv[])
{
	int first, second;

	if (argc == 3)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		printf("%i\n", first * second);
		return (0);
	}
	printf("Error\n");
	return (1);
}
