#include <stdio.h>
#include <stdlib.h>
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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(EXIT_SUCCESS);
}
