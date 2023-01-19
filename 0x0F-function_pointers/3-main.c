#include "3-calc.h"
/**
*main - calculator
*@argc: number of input
*@argv: vectors
*
*Return: 0 on sucess
*/
int main(int argc, char **argv)
{
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "%") || strcmp(argv[2], "/")) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2]);

	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
