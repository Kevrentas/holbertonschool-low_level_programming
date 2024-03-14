#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - op func
 * @argv: argument verctor
 * @argc: argument count
 * Return: total
 */
int main(int argc, char *argv[])
{
	int total;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	total = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", total);
	return (0);
}
