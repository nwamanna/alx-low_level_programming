#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
*main - entry point
*@argc: argument count
*@argv: argument vector
*
*Return: int 0 for success
*/
int main(int argc, char **argv)
{
	int i;
	long int *p;

	if (!(argc == 3) || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	p = (long int *) malloc(sizeof(long int));

	for (i = 0; i < argc; i++)
	{
		if (isalpha(*argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	*p = atoi(argv[1]) * atoi(argv[2]);

	if (p == NULL)
	{
		exit(98);
	}
	printf("%ld\n", *p);
	free(p);
	return (0);
}
