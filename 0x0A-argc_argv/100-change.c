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
	int cents = atoi(argv[1]);
	int coins = 0;

	if (argc == 1)
	{
		printf("error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
	}
	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	exit(EXIT_SUCCESS);
}
