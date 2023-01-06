#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*@argc: argument count
*@argv: argument vector
*
*Return: int 0 for success
*/
int main (int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
