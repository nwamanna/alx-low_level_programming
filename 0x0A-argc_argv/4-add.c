#include <stdio.h>
#include <stdlib.h>
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
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 0; i < argc; i++)
	{
		if (isalpha(*argv[i]))
		{
			printf("error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
