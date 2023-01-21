#include <stdio.h>
#include <stdlib.h>
/**
*main - prints opcodes
*@argc: count of arguments
*@argv: vectors
*
*Return: 0 on success
*/
int main(int argc, char **argv)
{
	int bit, i;
	int (*ptr)(int, char **) = main;
	unsigned char *p = (unsigned char *)ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bit = atoi(argv[1]);

	if (bit < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bit; i++)
	{
		printf("%.2hhx", *p);
		if (i < bit)
		printf(" ");
		p++;
	}
	printf("\n");
	return (0);
}
